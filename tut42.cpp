#include <iostream>

using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);

        void get_roll_number();
};

void Student::set_roll_number(int r){
    roll_number = r;
}

void Student::get_roll_number(){
    cout << "The Roll Number Is : " << roll_number << endl;
}

class Test: virtual public Student{
    protected:
        float math,physic;

    public:
        void set_marks(float,float);    

        void get_marks();
};

void Test::set_marks(float m1 , float m2){
    math = m1;
    physic = m2;
}

void Test::get_marks(){
    cout << "The Test Marks Are" << endl;
    cout << "Math Marks Is : " << math << endl;
    cout << "Physic Marks Is : " << physic << endl;
}

class Sports : virtual public Student{
    protected:
        int score;
    public:
        void set_score(int);

        void get_score();    
};

void Sports::set_score(int s){
    score = s;
}

void Sports::get_score(){
    cout << "The Sports Score Are" << endl;
    cout << "The Score Is : " << score << endl;
}

class Result : public Test , public Sports{
    protected:
        float total;
    public:
        void display();
};

void Result::display(){
    total = math + physic + score;
    get_roll_number();
    get_marks();
    get_score();
}


int main(){
    Result r;
    r.set_roll_number(1);
    r.set_marks(45,59);
    r.set_score(8);
    r.display();
    return 0;
}