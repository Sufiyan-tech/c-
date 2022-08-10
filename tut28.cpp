#include <iostream>

using namespace std;

class Complex{
    int a,b;

    public:
        Complex(int, int);

        void printNumbers(){
            cout << "The value of a : " << a << endl;
            cout << "The value of b : " << b << endl;
        }
};

Complex::Complex(int x , int y){
    a = x;
    b = y;
}

int main(){
    Complex c1(10,20);
    c1.printNumbers();

    Complex c2 = Complex(30,40);
    c2.printNumbers();

    return 0;
}

