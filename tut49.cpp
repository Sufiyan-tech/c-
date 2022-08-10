#include <iostream>

using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout << "The Base Class Variable Value Is : " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "The Base Class Variable Value Is : " << var_base << endl;
            cout << "The Derived Class Variable Value Is : " << var_derived << endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived = 98;
    derived_class_pointer->var_base = 1000;
    derived_class_pointer->display();

    return 0;
}