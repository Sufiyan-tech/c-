#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /*
    const int a = 10;
    cout << "The value of a was " << a << endl;
    a = 45;
    cout << "The value of a is " << a << endl;
    */

    /*
    int a = 10 , b = 20 , c = 4000;

    cout << "The value of a without setW " << a << endl;
    cout << "The value of b without setW " << b << endl;
    cout << "The value of c without setW " << c << endl;

    cout << "The value of a "  << setw(a) << a << endl;
    cout << "The value of b " << b << setw(b) << endl;
    cout << "The value of c " << setw(c) << c << endl;

    */

    int a=3 , b=4;
    int c = ((((a*5)+b)-45)+87);
    cout << "The value of c " << c << endl;
    return 0;

}