#include <iostream>
#include "this.h"

using namespace std;

int main(){
    int a=4,b=5;
    cout << "Arithmetic Operator in C++";
    cout << "The Addition Is : " << (a+b) << endl;
    cout << "The Substration Is : " << (a-b) << endl;
    cout << "The Multiplication Is : " << (a*b) << endl;
    cout << "The Division Is : " << (a/b) << endl;
    cout << "The Modulus Is : " << (a%b) << endl;
    cout << "The a++ Is : " << (a++) << endl;
    cout << "The a-- Is : " << (a--) << endl;
    cout << "The ++a Is : " << (++a) << endl;
    cout << "The --a Is : " << (--a) << endl;
    cout << endl;

    cout << "Asignment Operator in C++" << endl;
    cout << endl;
    int x=10 , y=20;
    bool c = true;

    cout << "Comparision Operator in C++" << endl;
    cout << "a==b" << (a==b) << endl;
    cout << "a!=b" << (a!=b) << endl;
    cout << "a>=b" << (a>=b) << endl;
    cout << "a<=b" << (a<=b) << endl;
    cout << "a>b" << (a>b) << endl;
    cout << "a<b" << (a<b) << endl;
    cout << endl;

    cout << "Logical Operator in C++" << endl;
    cout << "(a==b) && (a < n) " << ((a==b) && (a<b)) << endl;
    cout << "(a==b) || (a < n) " << ((a==b) || (a<b)) << endl;
    cout << "!(a==b) " << (!(a==b)) << endl;

    return 0;
}