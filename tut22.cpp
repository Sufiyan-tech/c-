#include <iostream>

using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(){
        cout << "Enter value of id : " << endl;
        cin >> id;
        count++;
    };

    void getData(){
        cout << "The value of id : " << id << " And value of count" << count << endl ;
    };

    static void getCount(){
        cout << "The value of count : " << count << endl;
    }

};

int Employee::count;


int main(){
    Employee sufiyan,deepak,dheeraj;
    sufiyan.setData();
    sufiyan.getData();
    Employee::getCount();

    deepak.setData();
    deepak.getData();
    Employee::getCount();

    dheeraj.setData();
    dheeraj.getData();
    Employee::getCount();




    return 0;
}
