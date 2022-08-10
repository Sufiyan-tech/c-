#include <iostream>

using namespace std;

class XYZ{
    int b;
    int a;
    

    public:
        // XYZ(int i, int j) : a(i) , b(j){
        // XYZ(int i, int j) : b(j) , a(i){    
        // XYZ(int i, int j) : a(i*2) , b(j){
        // XYZ(int i, int j) : a(b) , b(j){
        XYZ(int i, int j) : b(j) , a(b+i) {        
            cout << "The value of a : " << a << endl;
            cout << "The value of b : " << b << endl;  
        }
};

int main(){
    XYZ xyz(10,20);
    return 0;
}