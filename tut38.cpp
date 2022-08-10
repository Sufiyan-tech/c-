#include <iostream>

using namespace std;

class Student{
    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number(void);    
};

void Student::set_roll_number(int r){
    roll_number = r;
}

void Student::get_roll_number(void){
    cout << "The roll number of student : " << roll_number << endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;

    public:
        void set_marks(float , float);
        void get_marks(void);    
};

void Exam::set_marks(float m1 , float m2){
    maths = m1;
    physics = m2;
}

void Exam::get_marks(){
    cout << "The Math Marks : " << maths << endl;
    cout << "The Physic Marks : " << physics << endl;
}

class Result : public Exam{
    protected:
        float percentage;

    public: 
        void getPercentage();    
};

void Result::getPercentage(){
    get_roll_number();
    get_marks();
    percentage = (maths+physics)/2;
    cout << "The Percentage Is : " << percentage << endl;
}

int main(){
    Result r;
    r.set_roll_number(1);
    r.set_marks(55,65);
    r.getPercentage();
    return 0;
}
