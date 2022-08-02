#include <iostream>

using namespace std;

int glo = 6;

void sum(){
    int a;
    cout << glo;
}

int main(){
    int glo = 9;
    glo = 78;
    /*
    int a = 4;
    int b = 5;
    */
    int a=14,b=15;
    float pi = 3.14;
    char c = 'u';
    bool is_open = false;
    sum();
    /*
    cout << "The value of a : " << a << "\nThe value of b : " << b ;
    cout << "\nThe value of PI : " << pi;
    cout << "\nThe value of c : " << c;
    */
    cout << glo << is_open;
    return 0;
}
