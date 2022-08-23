#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> col1;

    col1.push_back(2);
    col1.push_back(5);
    col1.push_back(4);
    col1.push_back(1);
    col1.push_back(6);
    col1.push_back(3);

    vector<int> :: const_iterator minpos = min_element(col1.begin() , col1.end());
    cout << *minpos << endl;

    vector<int> :: const_iterator maxpos = max_element(col1.begin() , col1.end());
    cout << *maxpos << endl;

    sort(col1.begin() , col1.end());

    vector<int> :: iterator pos3;
    pos3 = find(col1.begin() , col1.end() , 3);
    cout << *pos3 << endl;

    reverse(pos3 , col1.end());

    vector<int> :: iterator pos;

    for(pos = col1.begin() ; pos != col1.end() ; ++pos){
        cout << *pos << " ";
    }

    return 0;
}