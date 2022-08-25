#ifndef MYINTEGER_H
#define MYINTEGER_H

#include <iostream>

using namespace std;


class MyInteger{
    public:
        MyInteger(int v = 0);
        void setValue(int v);
        int getValue() const;
        
        friend MyInteger operator+(const MyInteger &r1 , const MyInteger &r2);
        friend MyInteger operator-(const MyInteger &r1 , const MyInteger &r2);
        friend bool operator==(const MyInteger &r1 , const MyInteger &r2);
        friend ostream &operator<<(ostream & out , const MyInteger &r);
        friend istream &operator>>(istream & in , MyInteger &r);
    private:
        int value;
};

#endif