#include "FileEditor.h"
#include <fstream>

using namespace std;

void FileEditor::open(const char* filename){
    fstream fs(filename);
    string line;
    while(getline(fs , line)){
        push_back(line);
    }
};

void FileEditor::write(ostream& out){
    for(iterator w = begin() ; w != end() ; w++){
        out << *w << endl;
    }
};