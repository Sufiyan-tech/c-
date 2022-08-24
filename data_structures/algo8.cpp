#include<fstream>
#include<iostream>
#include<iterator>
#include<set>
#include<string>

using namespace std;

void wordSet(const char* fileName){
    ifstream source(fileName);
    string word;
    set<string> words;

    while(source >> word){
        words.insert(word);
    }
    copy(words.begin() , words.end() , ostream_iterator<string>(cout , "\n"));

    cout << "Number Of Unique Words" << words.size() << endl;
}

int main(int argc , char* argv[]){
    wordSet("./sample.txt");
    
    return 0;
}