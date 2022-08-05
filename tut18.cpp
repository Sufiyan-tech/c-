#include <iostream>

using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

int volume(double r , int h){
    return (3.14*r*r*h);
}

int volume(int a){
    return (a*a*a);
}

int volume(int l,int b,int h){
    return (l*b*h);
}

int main(){
    cout << "The Volumn Of Cylinder : " << volume(10.5,5) << endl;
    cout << "The Volumn Of Cuboid : " << volume(5) << endl;
    cout << "The Volumn Of Rectangle : " << volume(5,2,5) << endl;
    return 0;
}
