#include <iostream>

using namespace std;

class Complex{
    int a,b;

    public:
        Complex(){
            a=0;
            b=0;
        }

        Complex(int x,int y){
            a=x;
            b=y;
        }

        Complex(int x){
            a=x;
            b=0;
        }

        void printNumbers(){
            cout << "The value of a : " << a << endl;
            cout << "The value of b : " << b << endl;
        }
};

int main(){
    Complex c1;
    c1.printNumbers();

    Complex c2(10);
    c2.printNumbers();

    Complex c3(30,40);
    c3.printNumbers();

    return 0;
}
