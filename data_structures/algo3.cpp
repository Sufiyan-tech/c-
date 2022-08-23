#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    vector<int> col1;

    for(int i = 20 ; i <= 40 ; ++i ){
        col1.push_back(i);
    }

    auto pos3 = find(col1.begin() , col1.end() , 3);
    cout << *pos3 << endl;

    reverse(pos3 , col1.end());

    vector<int> :: const_iterator pos25 , pos35;

    pos25 = find(col1.begin() , col1.end() , 25);
    pos35 = find(col1.begin() , col1.end() , 35);

    cout << *max_element(pos25 , pos35) << endl;
    cout << *max_element(pos25 , ++pos35) << endl;



    return 0;
}