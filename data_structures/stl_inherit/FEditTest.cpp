#include<sstream>
#include "FileEditor.h"

using namespace std;

int main(int argc , char* argv[]){
    FileEditor file = FileEditor("../sample.txt");
    // file.open("../sample.txt");

    int i = 1;
    FileEditor :: iterator w = file.begin();

    while(w != file.end()){
        ostringstream ss;
        ss << i++;
        *w = ss.str() + " : " + *w;
    }

    file.write();
    return 0;
}