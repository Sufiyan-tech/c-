#include<fstream>
#include<iostream>
#include<iterator>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char* argv[]){
    const char* fname = "./sample.txt";
    ifstream in(fname);
    vector<string> strings;
    string line;

    while(getline(in , line)){
        strings.push_back(line);
    }

    int i = 1;
    vector<string> :: iterator w;
    for(w = strings.begin() ; w != strings.end() ; w++){
        ostringstream ss;
        ss << i++;
        *w = ss.str() + ": " + *w;
    }
    copy(strings.begin() , strings.end() , ostream_iterator<string>(cout , "\n"));

    return 0;
}
