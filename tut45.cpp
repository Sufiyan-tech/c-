#include <iostream>

using namespace std;

int main(){
    int a = 4;
    int* ptr = &a;
    *ptr = 10;
    cout << *ptr << endl;
    cout << a << endl;

    float* p = new float(5);
    cout << *p << endl;

    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 50;
    arr[2] = 30;

    cout << *(arr) << endl;
    cout << *(arr+1) << endl;
    cout << arr[2] << endl;



    return 0;
}

