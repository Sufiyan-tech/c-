#include <iostream>

using namespace std;

class BankDeposit{
    float principle;
    int years;
    float interestRete;
    float returnValue;

    public:
        BankDeposit(){}

        BankDeposit(float p , int y , float r);

        BankDeposit(float p , int y , int R);

        void getInfo(){
            cout << "The Principle Amount : " << principle << endl;
            cout << "The Years : " << years << endl;
            cout << "The Interest Rate : " << interestRete << endl;
            cout << "The Return Value : " << returnValue << endl;
        }
};

BankDeposit :: BankDeposit(float p , int y , float r){
    principle = p;
    years = y;
    interestRete = r;
    returnValue = principle;
    for(int i = 0 ; i < years ; i++){
        returnValue = returnValue * (1+interestRete);
    }
}

BankDeposit :: BankDeposit(float p , int y , int r){
    principle = p;
    years = y;
    interestRete = float(r)/100;
    returnValue = principle;
    for(int i = 0 ; i < years ; i++){
        returnValue = returnValue * (1+interestRete);
    }
}


int main(){
    BankDeposit b1,b2,b3;
    
    float p;
    int y;
    float r;
    int R;

    cout << "Enter Value For p , y , r" << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p,y,r);
    b1.getInfo();

    cout << "Enter Value For p , y , R" << endl;
    cin >> p >> y >> R;
    b1 = BankDeposit(p,y,R);
    b1.getInfo();



    return 0;
}
