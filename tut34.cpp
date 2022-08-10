#include <iostream>

using namespace std; 

int count = 0;

class Num{
    public:
        Num(){
            ::count++;
            cout << "The Num Object " << count << " Has Been Called..." << endl;
        } 

        ~Num(){
            cout << "The Num Object " << count << " Has Been Off..." << endl;
            ::count--;
        }
};


int main(){
    cout << "Inside Main Function" << endl;
    cout << "Creating One Object " << endl;
    Num n1;
    {   
        cout << "Inside Block" << endl;
        cout << "Creating Two More Objects" << endl;
        Num n1,n2;
        cout << "Exiting Block" << endl;
    }
    cout << "Outside Main Function" << endl;
    return 0;
}
