#include <iostream>

using namespace std;

int main(){
    int marks[] = {10,20,30,40};
    cout << "The marks are : " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[4];
    mathMarks[0] = 15;
    mathMarks[1] = 25;
    mathMarks[2] = 35;
    mathMarks[3] = 45;
    cout << "The marks are : " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << endl;


    for(int i = 0 ; i < 4 ; i++){
        cout << "The value of mathMarks at " << i << " " << mathMarks[i] << endl;
    }

    int* p = marks;

    cout << "The address of marks : " << marks << endl;
    cout << "The address of marks : " << p << endl;

    cout << "The value at *p : " << *p << endl;
    cout << "The value at *(p+1) : " << *(p+1) << endl;
    cout << "The value at *(p+2) : " << *(p+2) << endl;
    cout << "The value at *(p+3) : " << *(p+3) << endl;

    cout << *(p++) << endl;
    cout << *(++p) << endl;






    return 0;
}
