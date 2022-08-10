#include <iostream>

using namespace std;

template<class T1=int , class T2=float, class T3=char>
class MyClass{
    T1 a;
    T2 b;
    T3 c;

    public:
        MyClass(T1 a, T2 b , T3 c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void display(){
            cout << "The value of a : " << a << endl;
            cout << "The value of b : " << b << endl;
            cout << "The value of c : " << c << endl;
        }
};


int main(){
    MyClass <>mc(10,10.5,'c');
    mc.display();

    MyClass <float,char,char>mc1(10.5 , 'c' , 'a');
    mc1.display();
    return 0;
}
