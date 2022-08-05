#include <iostream>

using namespace std;

int rec(int n){
    if(n >= 21){
        return 1;
    }
    cout << n << endl;
    return rec(n+1);
}

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}

int powNum(int num , int pow){
    if(pow < 1){
        return 1;
    }
    return num * powNum(num , pow-1);
}

bool primeChecker(int n){
    static int temp = n-1;
    if(temp <= 1){
        return 1;
    }
    else if((n % temp) != 0){
        temp--;
        primeChecker(n);
    }else{
        return 0;
    }
}

int fib(int n){
    if(n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    cout <<  fib(5) << endl;
    return 0;
}
