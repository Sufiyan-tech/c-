#include <iostream>

using namespace std;

class Y;

class X{
    int num1;

    friend void addData(X,Y);

    public:
        void setData(int num){
            num1 = num;
        }
};

class Y{
    int num2;

    friend void addData(X,Y);
    
    public:
        void setData(int num){
            num2 = num;
        }
};

void addData(X x , Y y){
    cout << "The Sum Is : " << (x.num1+y.num2);
}


int main(){
    X x;
    x.setData(10);

    Y y;
    y.setData(20);

    addData(x,y);
    return 0;
}