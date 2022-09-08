#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(){
    fstream in("./sample.txt");
    string line;
    vector<string> v;

    while(getline(in , line)){
        v.push_back(line);
    }

    vector<string> :: reverse_iterator r;
    for(r = v.rbegin() ; r != v.rend() ; r++){
        cout << *r << endl;
    }

    return 0;
}