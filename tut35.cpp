#include <iostream>

using namespace std;

class Employee{
    
    public:
        int id;
        float salary;

        Employee(){

        }

        Employee(int inpId){
            id=inpId;
            salary = 34.0;
        }
};

class Programmer : Employee{
    int languageCode = 9;

    public:
        Programmer(int inpId){
            id = inpId;
        }    

        void getData(){
            cout << id << endl;
        }
};

int main(){
    Employee sufiyan(1),saif(2);
    Programmer p(3);


    cout << sufiyan.salary << endl;
    cout << saif.salary << endl;
    p.getData();

    return 0;
}
