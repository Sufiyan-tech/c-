#include <iostream>

using namespace std;

class Employee{
    int id;
    int salary;

    public:
    void setId(){
        cout << "Enter Value Of Id : " << endl; 
        cin >> id;
    }

    void getId(){
        cout << "The value of Id : " << id << endl;
    }

};

class Complex{
    int a;
    int b;

    public:
    void setValue(int x , int y){
        a = x;
        b = y;
    }

    void getSumViaOb(Complex o1 , Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printValues(){
        cout << "The value of a : " << a << endl;
        cout << "The value of b : " << b << endl;
    }
};


int main(){
    /*
    Employee employees[4];

    for(int i = 0 ; i < 4 ; i++){
        employees[i].setId();
        employees[i].getId();
    }

    */

    Complex c1 , c2 , c3;
    c1.setValue(10,20);
    c1.printValues();

    c2.setValue(30,40);
    c2.printValues();

    c3.getSumViaOb(c1,c2);
    c3.printValues();


    return 0;
}
