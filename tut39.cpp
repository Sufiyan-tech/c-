#include <iostream>

using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void setBase1Int(int a){
             base1int = a;
        }    
};

class Base2{
    protected:
        int base2int;
    public:
        void setBase2Int(int a){
             base2int = a;
        }    
};

class Base3{
    protected:
        int base3int;
    public:
        void setBase3Int(int a){
            base3int = a;
        }    
};

class Derived : public Base1 , public Base2 , public Base3{
    public:
        void show(){
            cout << "The value of base 1 : " << base1int << endl;
            cout << "The value of base 2 : " << base2int << endl;
            cout << "The value of base 3 : " << base3int << endl;
            cout << "The Sum Is : " << (base1int + base2int + base3int) << endl;
        }
};

int main(){
    Derived d;
    d.setBase1Int(10);
    d.setBase2Int(20);
    d.setBase3Int(30);
    d.show();
    return 0;
}
