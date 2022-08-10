#include <iostream>

using namespace std;

class Base{
    int data1;
    
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base::setData(void){
    data1 = 10;
    data2 = 20;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}

class Derived : private Base{
    int data3;
    public:
        void process();
        void display();
};

void Derived::process(){
    setData();
    data3 = data2 * getData1();
}

void Derived::display(){
    cout << "The value of data1 : " << getData1() << endl;
    cout << "The value of data2 : " << data2 << endl;
    cout << "The value of date3 : " << data3 << endl;
}


int main(){
    Derived dr;
    dr.process();
    dr.display();
    return 0;
}
