#include <iostream>

using namespace std;


//int sum(int a,int b);
int sum(int,int);
void g(void);

int main(){ 
    int num1,num2;
    cout << "Enter Value Of Num 1 : " << endl;
    cin >> num1;
    cout << "Enter Value Of Num 2 : " << endl;
    cin >> num2;
    cout << "The Sum Is : " << sum(num1 , num2) << endl;

    g();

    return 0;
}

int sum(int a , int b){
    int c = a+b;
    return c;
}

void g(){
    cout << "Hello, Good Morning" << endl;
}