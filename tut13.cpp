#include <iostream>

using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
} ep;

union money{
    int dollar;
    char pkr;
    double pound;
};

int main(){

    enum Meal{breakfast , lunch , dinner};

    Meal m1 = breakfast;

    cout << m1 << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    /*
    ep sufiyan;
    sufiyan.eId = 1;
    sufiyan.favChar = 's';
    sufiyan.salary = 1000;

    cout << "The id is : " << sufiyan.eId << endl;
    cout << "The favChar is : " << sufiyan.favChar << endl;
    cout << "The salary is : " << sufiyan.salary << endl;
    

    union money currency;
    currency.dollar = 45;
    currency.pkr = 'a';
    cout << currency.dollar << endl;

    */

    return 0;
}