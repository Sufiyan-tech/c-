#include <iostream>

using namespace std;

/*
class Base1{
    int data1;

    public:
        Base1(int a){
            data1 = a;
            cout << "Base 1 Constructor Called...." << endl;
        }

        void printBase1(){
            cout << "The value of data 1 " << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int a){
            data2 = a;
            cout << "Base 2 Constructor Called...." << endl;
        }

    void printBase2(){
        cout << "The value of data 2 " << data2 << endl;
    }
};

class Derived : public Base1 , public Base2{
    int derived1,derived2;

    public:
        Derived(int a , int b , int c , int d) : Base1(a) , Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived Constructor Called...." << endl;
        }

        void printDerivec(){
            cout << "The Derived One : " << derived1 << endl;
            cout << "The Derived Two : " << derived2 << endl;
        }
};
*/


class Base{
    int data;
    public:
        Base(int a){
            data = a;
        }
};

class Derived : public Base{
    int data1;
    public:
        Derived(int a , int b) : Base(a){
            data1 = b;
        }
};

int main(){
    Derived d(10,20);
    /*
    Derived d(10,20,30,40);
    d.printBase1();
    d.printBase2();
    d.printDerivec();
    */
    return 0;
}
