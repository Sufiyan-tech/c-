#include <iostream>

using namespace std;


int main(){
    int arr[5];
    int* ptr_arr = arr;

    for(int i = 0 ; i < 5 ; i++){
        *(ptr_arr+i) = 10+i; 
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << *(ptr_arr+i) << endl;
    }

    return 0;
}

