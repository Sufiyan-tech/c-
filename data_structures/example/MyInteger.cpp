#include "MyInteger.h"
#include <iostream>

using namespace std;

MyInteger :: MyInteger(int v){
    value = v;
}

void MyInteger::setValue(int v){
    value = v;
}

int MyInteger::getValue() const{
    return value;
}

bool operator==(const MyInteger &r1, const MyInteger &r2){
    MyInteger res;
    return (r1.getValue() == r2.getValue());
}


MyInteger operator+(const MyInteger &r1 , const MyInteger &r2){
    MyInteger res;
    res.setValue(r1.getValue() + r2.getValue());
    return res;
}

MyInteger operator-(const MyInteger &r1 , const MyInteger &r2){
    MyInteger res;
    res.setValue(r1.getValue() - r2.getValue());
    return res;
}

ostream &operator<<(ostream & out , const MyInteger &r){
    out << r.getValue();
    return out;
}

istream &operator>>(istream & in , MyInteger &r){
    int temp;
    in >> temp;
    r.setValue(temp);
    return in;
}