#include <iostream>

using namespace std;

class Simple{
    int a,b,c;

    public:
        Simple(int x , int y = 10 , int z = 11){
            a=x;
            b=y;
            c=z;
        }

        void printNumbers(){
            cout << "The values of a,b,c are " << a <<  b << c << endl;
        }
};

int main(){
    Simple s(5 , 4 , 12);
    s.printNumbers();

    return 0;
}
