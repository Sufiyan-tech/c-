#include <iostream>

using namespace std;

template <class T1 , class T2>
float funcAvg(T1 a , T2 b){
    float avg = (a+b)/2;
    return avg;
}

template <class T>
void swapp(T &a , T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=10,y=20;
    cout << x << " " << y << endl;
    swapp(x,y);
    cout << x << " " << y << endl;
    return 0;
}
