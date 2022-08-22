#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> col1 = {2,5,4,1,6,3};

    auto minpos = min_element(col1.begin() , col1.end());
    cout << *minpos << endl;

    auto maxpos = max_element(col1.begin() , col1.end());
    cout << *maxpos << endl;

    sort(col1.begin() , col1.end());

    auto pos3 = find(col1.begin() , col1.end() , 3);
    cout << *pos3 << endl;

    reverse(pos3 , col1.end());

    for(auto elem : col1){
        cout << elem << endl;
    }

    return 0;
}
