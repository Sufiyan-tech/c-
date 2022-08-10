#include <iostream>

using namespace std;

class Cricketer{
    protected:
        string name;
        int age;
        string team;
        int matches;

    public:
        Cricketer(string name = "n/a" , int age = 0 , string team = "n/a" , int matches = 0){
            this->name = name;
            this->age = age;
            this->team = team;
            this->matches = matches;
        }

        void getCricketerInfo(){
            cout << "The Cricketer Info : " << endl;
            cout << "The Name Is : " << name << endl;
            cout << "The Age Is : " << age << endl;
            cout << "The Team Is : " << team << endl;
            cout << "The Matches Is : " << matches << endl;
        }

        virtual float averageSkill()=0;

};

class Bowler : virtual public Cricketer{
    private:
        int wickets;
        float speed;

    public:
        Bowler(int wickets , float speed){
            this->wickets = wickets;
            this->speed = speed;
        }    

        void getBowlingInfo(){
            cout << "The Bowling Info : " << endl;
            cout << "The Wickets Is : " << wickets << endl;
            cout << "The Speed Is : " << speed << endl;
        }

        float averageSkill(){
            float skill = wickets / matches;
            return skill;
        }
};

class Batsman : virtual public Cricketer{
    private:
        float runs;
        int total_centuries;
    
    public:
        Batsman(float runs , int total_centuries){
            this->runs = runs;
            this->total_centuries = total_centuries;
        }

        void getBattingInfo(){
            cout << "The Batting Info : " << endl;
            cout << "The Runs Is : " << runs << endl;
            cout << "The Centuries Is : " << total_centuries << endl;
        }

        float averageSkill(){
            float skill = runs / matches;
            return skill;
        }

};

class AllRounder :  public Bowler , public Batsman{
    public:
        AllRounder(string name , int age , string team , int matches , int wickets , float speed , float runs , int total_centuries) : Cricketer(name , age , team , matches) , Bowler(wickets , speed) , Batsman(runs , total_centuries){

        }

        float averageSkill(){
            float skill = Bowler::averageSkill()+Batsman::averageSkill();
            return skill;
        }

        void getAverageInfo(){
            cout << "The Bowling Average : " << Bowler::averageSkill() << endl;
            cout << "The Batting Average : " << Batsman::averageSkill() << endl;
            cout << "The Bowling Average : " << averageSkill() << endl;
        }

        
};


int main(){
    AllRounder allrounder1("Babar Azam" , 25 , "Pakistan" , 100 , 800 , 80.0 , 45000 , 15);
    AllRounder allrounder2("Shahid Afridi" , 45 , "Pakistan" , 300 , 1500 , 100.0 , 95000 , 12);

    AllRounder * allrounders[2];
    allrounders[0] = &allrounder1;
    allrounders[1] = &allrounder2;


    for(int i = 0 ; i < 2 ; i++){
        (*(&allrounders[i]))->getCricketerInfo();
        (*(&allrounders[i]))->getBowlingInfo();
        (*(&allrounders[i]))->getBattingInfo();
        (*(&allrounders[i]))->getAverageInfo();
        // allrounders[i]->getCricketerInfo();
        // allrounders[i]->getBowlingInfo();
        // allrounders[i]->getBattingInfo();
        // allrounders[i]->getAverageInfo();
        
    }


    
    return 0;
}