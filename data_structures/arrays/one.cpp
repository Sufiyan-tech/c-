#include<iostream>

using namespace std;

int main(){
    int arr[6] = {11,12,13,14,15,16};

    for(int i = 0 ; i < (sizeof(arr)/4) ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Other Method " << endl;

    for(int i = 0 ; i < (sizeof(arr)/4) ; i++){
        cout << i[arr] << " ";
    }

    return 0;
}

