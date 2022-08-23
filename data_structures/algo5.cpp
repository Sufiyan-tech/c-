#include<list>
#include<vector>
#include<deque>
#include<iostream>

using namespace std;

int main(){
    list<int> col1 = {1,2,3,4,5,6,7,8,9};
    vector<int> col2;

    col2.resize(col1.size());

    copy(col1.cbegin() , col1.cend() , col2.begin());

    deque<int> col3;

    col3.resize(col1.size());

    copy(col1.cbegin() , col1.cend() , col3.begin());

    for(const auto & elem : col3){
        cout << elem << endl;
    }



    return 0;
}