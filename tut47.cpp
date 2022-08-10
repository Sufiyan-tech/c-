#include <iostream>

using namespace std;

class Shop{
    int id;
    float price;
    
    public:
        void setData(int i , float p){
            id = i;
            price = p;
        }

        void getData(){
            cout << "The Id Is : " << id << endl;
            cout << "The Price Is : " << price << endl;
        }
};

int main(){
    Shop *ptr = new Shop[3];
    Shop *ptrtemp = ptr;

    int i,id;
    float price;

    for(i = 0 ; i < 3 ; i++){
        cout << "Enter Id and Price for item " << (i+1) << endl;
        cin >> id >> price;
        (*ptr).setData(id , price);
        ptr++;
    }

    // ptr = ptr-3;

    for(i = 0 ; i < 3 ; i++){
        cout << "The Details Of Item " << (i+1) << endl;
        ptrtemp->getData();
        ptrtemp++;
    }

    



    return 0;
}
