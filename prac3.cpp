#include <iostream>

using namespace std;

class Transaction{
    public:
        virtual void deposit(float amount) = 0;

        virtual void withdraw(float amount) = 0;
};

class Account : public Transaction{
    protected:
        string acc_title;
        float amount;
    public:
        Account(){}

        Account(string acc_title , float amount){
            this->acc_title = acc_title;
            this->amount = amount;
        }

        virtual void deposit(float amount){}

        virtual void withdraw(float amount){}

        void getBalance(){
            cout << "The Balance Of Your Account (" << this->acc_title << ") Is " << this->amount << endl;  
        };

        

        
        
};

class SavingAccount : public Account{
    protected:
        float limit;
    public:
        SavingAccount(string acc_title , float amount , float limit) : Account(acc_title , amount){
            this->limit = limit;
        }

        void deposit(float amount){
            this->amount = this->amount + amount;           
        }

        void withdraw(float amount){
            if(amount > this->amount){
                cout << "You Have Only " << (this->amount) << " Left " << endl;
            }else if(amount > limit){
                cout << "You Can Only Withdraw " << (limit) << " On Single Time " << endl;
            }else{
                this->amount = this->amount - amount;
            }
                       
        }
};

class CheckingAccount : public Account{
    protected:
        float fees;
    public:
        CheckingAccount(string acc_title , float amount , float fees) : Account(acc_title , amount){
            this->fees = fees;
        }

        void deposit(float amount){
            this->amount = this->amount + amount;           
        }

        void withdraw(float amount){
            if(amount > this->amount){
                cout << "You Have Only " << (this->amount) << " Left " << endl;
            }else if((amount+fees) > this->amount){
                cout << "You Have No Cheque Fees" << endl;
            }else{
                this->amount = (this->amount) - (amount+this->fees);
            }
                       
        }


};


int main(){
    Account * acc[2];
    
    SavingAccount sa("ABC" , 5000 , 1000);
    CheckingAccount ca("XYZ" , 6000 , 500);

    acc[0] = &sa;
    acc[1] = &ca;

    acc[0]->getBalance();
    acc[0]->deposit(1000);
    acc[0]->withdraw(500);
    acc[0]->getBalance();

    return 0;
}