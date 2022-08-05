#include <iostream>

using namespace std;

int main(){
    int a = 3;
    int* b = &a;

    cout << "The address of a : " << &a << endl;
    cout << "The address of a : " << b << endl;
    cout << "The value at address b : " << *b << endl;
    cout << endl;

    int** c = &b;

    cout << "The address of b :" << &b << endl;
    cout << "The address of b :" << c << endl;
    cout << "The value of *c : " << *c << endl;
    cout << "The value of **c : " << **c << endl;
    cout << endl;

    int*** d = &c;
    cout << "The address of c : " << &c << endl;
    cout << "The address of c : " << d << endl;
    cout << "The value of *d : " << *d << endl; 
    cout << "The value of **d : " << **d << endl;
    cout << "The value of ***d : " << ***d << endl; 

    ***d = 5;
    cout << a << endl;



    return 0;
}
