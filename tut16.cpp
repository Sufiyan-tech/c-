#include <iostream>

using namespace std;

inline int product(int a, int b){
    // static int c = 0;
    // c = c+1;
    return a*b;
}

int moneyReceived(int currentMoney , float factor = 1.04){
    return currentMoney*factor;
}

int strLen(const char* p){

}

int main(){
    /*
    int a,b;
    cout << "Enter value of a , b " << endl;
    cin >> a >> b;

    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    cout << "The product is " << product(a,b) << endl;
    */

    cout << moneyReceived(100000) << endl;
    cout << moneyReceived(100000 , 1.10) << endl;



    return 0;
}
