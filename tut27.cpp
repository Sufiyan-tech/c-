#include <iostream>

using namespace std;

class Complex{
    int a,b;

    public:
        Complex(void);

        void printData(){
            cout << a << b << endl;
        }
};

Complex::Complex(void){
    a = 10;
    b = 20;
}

int main(){
    Complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}
