#include<list>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    list<int> col1 = {1,2,3,4,5,6,7,8,9};
    vector<int> col2;

    copy(col1.cbegin() , col1.cend() , col2.begin());

    for(const auto& elem : col2){
        cout << elem << " ";
    }

    return 0;
}