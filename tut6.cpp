#include <iostream>

using namespace std;

int c = 45;

int main(){
    /*
    int a,b,c;

    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;

    c = a+b;

    cout << "The sum is : " << c << endl;
    cout << "The global c is : " << ::c << endl;
    */

    /*
    float f = 34.4F;
    long double d = 45.62L;

    cout << "The size of 34.4 is : " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is : " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is : " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is : " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is : " << sizeof(34.4L) << endl;


    cout << "The value of f : " << f << endl;
    cout << "The value of d : " << d << endl;
    */

    /*
    float x = 10.5;
    float & y = x;

    cout << "The value of x : " << x << endl;
    cout << "The value of & y : " << y << endl;
    */

    int a = 45;
    float b = 45.45;

    cout << "The value of (float)a : " << (float)a << endl;
    cout << "The value of (int)b : " << (int)b << endl;

    cout << "The value of float(a) : " << float(a) << endl;
    cout << "The value of int(b) : " << int(b) << endl;

    int c = int(b);

    cout << "The expression is " << a+b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;



    return 0;
}