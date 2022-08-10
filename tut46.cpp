#include <iostream>

using namespace std;

class Complex{
    int real;
    int imaginary;

    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

        void getData(){
            cout << "The real value is : " << real << endl;
            cout << "The imaginary value is : " << imaginary << endl;
        }
};

int main(){
    Complex c1;
    c1.setData(10,20);
    c1.getData();

    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // (*ptr).setData(5,2);
    // (*ptr).getData();
    // ptr->setData(5,15);
    // ptr->getData();
    
    Complex *ptr = new Complex[4];
    for(int i = 0 ; i < 4 ; i++){
        (ptr+i)->setData(1,2);
        (ptr+i)->getData();
    }


    return 0;
}
