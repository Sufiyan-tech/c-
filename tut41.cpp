#include <iostream>

using namespace std;

class Base1{
    public:
        void greet(){
            cout << "How Are You?" << endl;
        }
};

class Base2{
    public:
        void greet(){
            cout << "Kaise Hou?" << endl;
        }
};


class Derived: public Base1 , public Base2{
    public:
        void greet(){
            Base2::greet();
        }
};

class C{
    public:
        void say(){
            cout << "Hello" << endl;
        }
};

class D : public C{
    /*
    public:
        void say(){
            cout << "World" << endl;
        }
        */
};

int main(){
    /*
    Base1 b1;
    Base2 b2;
    Derived d;
    
    b1.greet();
    b2.greet();
    d.greet();
    */

    D d;
    d.say(); 

    return 0;
}
