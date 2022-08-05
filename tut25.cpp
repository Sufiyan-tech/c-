#include <iostream>

using namespace std;

class Complex;

class Calucation{
    int a;
    int b;

    public:
    int add(){
        return (a+b);
    }

    int getRealComplex(Complex , Complex);

    int getComplexComplex(Complex , Complex);

};

class Complex{
    int a;
    int b;

    /*
    friend int Calucation::getRealComplex(Complex , Complex);
    friend int Calucation::getComplexComplex(Complex , Complex);
    */
   friend class Calucation;


    public:
    void setData(int a1 , int b1){
        a = a1;
        b =  b1; 
    }
};

int Calucation::getRealComplex(Complex c1 , Complex c2){
    return (c1.a + c2.a);
};

int Calucation::getComplexComplex(Complex c1 , Complex c2){
    return (c1.b + c2.b);
};



int main(){
    Complex c1 , c2;
    c1.setData(1,2);
    c2.setData(3,4);
    Calucation calucation;
    cout << calucation.getRealComplex(c1 , c2) << endl;
    cout << calucation.getComplexComplex(c1 , c2) << endl;


    return 0;
}