#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;


int main(){
    int arr[] = {10,5,3,78,2,88};
    // sort(arr , arr+6);
    sort(arr , arr+6 , greater<int>());

    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}