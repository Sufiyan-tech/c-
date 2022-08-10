#include <iostream>

using namespace std;

class Number{
    int a;

    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }

        // Number(Number & number){
        //     a = number.a;
        //     //number.a = 10;
        //     //a = 20;
        // }

        void display(){
            cout << "The value of a : " << a << endl;
        }
};


int main(){
    Number x,y,z,z1;
    z = Number(45);
    z1 = Number(z);

    x.display();
    y.display();
    z.display();
    z1.display();

    
    return 0;
}
