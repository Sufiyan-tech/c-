#ifndef FILEEDITOR_H
#define FILEEDITOR_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FileEditor : public vector<string>{
    public:
        void open(const char* filename);
        FileEditor(const char* filename){
            this->open(filename);
        }
        FileEditor(){};
        void write(ostream& out = cout);
};


#endif 