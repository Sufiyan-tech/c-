#include <iostream>

using namespace std;

class Complex{
    int a;
    int b;
    friend Complex sumComplex(Complex , Complex);
    friend void getComplexValue(Complex);


    public:
    void setValue(int a1 , int b1){
        a = a1;
        b = b1;
    }

    void getValue(){
        cout << "The value is : " << a << "+ " << b << "i" << endl;
    }
};

Complex sumComplex(Complex c1 , Complex c2){
    Complex complex;
    complex.setValue((c1.a + c2.a) , (c1.b + c2.b));
    return complex;
}

void getComplexValue(Complex c){
    c.setValue(5,4);
    cout << c.a << c.b << endl;
}

int main(){
    Complex c1 , c2 , sum;
    c1.setValue(10,20);
    c1.getValue();

    c2.setValue(30,40);
    c2.getValue();

    sum = sumComplex(c1,c2);
    sum.getValue();
    
    getComplexValue(c1);

    return 0;
}
