#include<sstream>
#include "FileEditor.h"

using namespace std;

int main(int argc , char* argv[]){
    FileEditor file ;
    file.open("wow.txt");

    // int i = 1;
    // FileEditor :: iterator w = file.begin();

    // while(w != file.end()){
    //     ostringstream ss;
    //     ss << i++;
    //     *w = ss.str() + " : " + *w;
    // }

    file.write();
    return 0;
}