#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;

    /*
    if((age < 18) && (age > 0)){
        cout << "You can't come to party" << endl; 
    }else if(age == 18){
        cout << "You can get kid pass for party" << endl;
    }else if(age < 1){
        cout << "You are not born" << endl;
    }else{
        cout << "You can come to party" << endl;
    }
    */

    switch(age){
        case 18:
            cout << "You are 18" << endl;
            break;
        case 22:
            cout << "You are 22" << endl;
            break;
        case 2:
            cout << "You are 2" << endl;
            break;
        default:
            cout << "no special case" << endl;
            break;            
    }




    return 0;
}
