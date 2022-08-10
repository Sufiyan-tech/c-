#include <iostream>
#include <fstream>

using namespace std;



int main(){
    ofstream fout("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sample.txt");
    string name;
    cout << "Enter Your Name : " << endl;
    cin >> name;
    fout << name + " is my name";
    fout.close();

    ifstream fin("C:\\Users\\muhammad.sufiyan\\Desktop\\c++\\sample.txt");
    string data;
    // fin >> data;
    getline(fin , data);
    cout << data;

    return 0;
}
