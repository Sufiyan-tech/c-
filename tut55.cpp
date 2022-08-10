#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    ofstream out;
    out.open("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sample.txt");
    out << "This Is First Line \n";
    out << "This Is Second Line \n";
    out << "This Is Third Line";
    out.close();

    ifstream in;
    in.open("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sample.txt");
    string s;
    // in >> s;
    // getline(in , s);
    while(in.eof() == 0){
        getline(in , s);
        cout << s << endl;
    }
    
    

    return 0;
}
