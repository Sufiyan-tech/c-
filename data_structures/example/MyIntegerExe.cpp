#include "MyInteger.h"
#include <iostream>

using namespace std;

int main(){
    MyInteger i1;
    MyInteger i2(5);
    MyInteger i3 = i2;
    MyInteger i4(10);

    cout << i1 << endl;
    cout << i2.getValue() << endl;
    cout << i3 << endl;

    i1.setValue(-4);
    i3 = i1+i2+10.5;
    cout << i3 << endl;
    cout << "i2 - i1 : " << (i2-i1) << endl;

    cout << "Enter An Integer : " << endl;
    cin >> i1;

    if(i1==i2){
        cout << "Same" << endl;
    }else{
        cout << "Different" << endl;
    }

    i2.setValue(25);

    cout << i1 << endl;
    cout << i2 << endl;

   
}