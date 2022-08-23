#include<list>
#include<vector>
#include<deque>
#include<set>
#include<iostream>

using namespace std;

int main(){
    list<int> col1 = {1,2,3,4,5,6,7,8,9};

    vector<int> col2;
    copy(col1.cbegin() , col1.cend() , back_inserter(col2));

    deque<int> col3;
    copy(col1.cbegin() , col1.cend() , front_inserter(col3));

    set<int> col4;
    copy(col1.begin() , col1.end() , inserter(col4 , col4.begin()));

    for(const auto & elem : col4){
        cout << elem << " ";
    }

    return 0;
}