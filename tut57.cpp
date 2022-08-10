#include <iostream>

using namespace std;

template <class T1 , class T2>
class MyClass{
    T1 data1;
    T2 data2;
    public:
        MyClass(T1 data1 , T2 data2){
            this->data1 = data1;
            this->data2 = data2;
        }

        void display(){
            cout << "The Data 1 Is : " << data1 << endl;
            cout << "The Data 2 Is : " << data2 << endl;
        }
};

class Student;

template <class T>
class Vector{
    T * arr;
    int size;

    public:
        Vector(int size){
            this->size = size;
            arr = new T[this->size];
        }

        void setArr(int index , T a){
            this->arr[index] = a;
        }

        T * getArr(){
            return arr;
        }
};

class Student{
    int id;
    string name;

    public:
        Student(){};

        Student(int id , string name){
            this->id = id;
            this->name = name;
        }

        void display(){
            cout << "The Id Is : " << id << endl;
            cout << "The Name Is : " << name << endl;
        }
};



int main(){
    Student st1(1 , "Sufiyan");
    Student st2(2 , "Saif");

    Vector <Student>vec(2);
    vec.setArr(0 , st1);
    vec.setArr(1 , st2);

    for(int i = 0 ; i < 2 ; i++){
        vec.getArr()[i].display();
    }


    return 0;
}