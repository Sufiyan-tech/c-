#include <iostream>
#include <fstream>

using namespace std;


int main(){
    string s = "Sufiyan Bhai";
    string s1;
    // Opening File And Writing On It
    // ofstream out("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sample.txt");
    // out << s;

    // Opening files and reading it
    ifstream in("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sampleb.txt");
    // in >> s;
    getline(in , s);
    cout << s;    

    return 0; 
}