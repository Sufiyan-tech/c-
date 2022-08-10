#include <iostream>

using namespace std;

class Y;

class X{
    int val1;

    friend void swapData(X* , Y*);

    public:
        void setData(int val){
            val1 = val;
        }

        void display(){
            cout << val1 << endl;
        }
};

class Y{
    int val2;
    
    friend void swapData(X* , Y*);

    public:
        void setData(int val){
            val2 = val;
        }

        void display(){
            cout << val2 << endl;
        }
};

void swapData(X *x , Y *y){
    int temp = x->val1;
    x->val1 = y->val2;
    y->val2 = temp;
}


int main(){
    X x;
    x.setData(10);
    Y y;
    y.setData(20);

    swapData(&x,&y);

    x.display();
    y.display();


    return 0;
}
