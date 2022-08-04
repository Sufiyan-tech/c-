#include <iostream>

using namespace std;

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int & swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}


int main(){
    int a = 4 , b = 5;
    cout << "The value of a : " << a << " And The value of b : " << b << endl;
    //swapPointer(&a,&b);
    swapReferenceVar(a,b) = 88;
    cout << "The value of a : " << a << " And The value of b : " << b << endl;

    return 0;
}
