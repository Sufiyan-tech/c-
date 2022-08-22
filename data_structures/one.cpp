#include<unordered_set>
#include<iostream>

using namespace std;

int main(){

    typedef unordered_set<int> IntSet;

    unordered_set<int> col1;
    col1.insert({1,3,5,7,11,13,17,19,23,27,1});

    for(auto & elem : col1){
        cout << elem << endl;
    }

    col1.insert(25);
    
    cout << endl;

    for(auto & elem : col1){
        cout << elem << endl;
    }

    cout << endl;

    IntSet :: const_iterator itr;

    // cout << *itr<< endl;
    // cout << *++itr<< endl;

    for(itr = col1.begin() ; itr != col1.end() ; ++itr){
        cout << *itr << endl;
    }
    
    
    
}