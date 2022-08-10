#include <iostream>
#include <cmath>

using namespace std;

class Points{
    int x,y;
    static int line_no;

    friend int distancePoints(Points , Points);

    public:
        Points(int , int);

        void displayPoints(){
            cout << "The coordinates of line " << line_no << endl;
            cout << "The value of x : " << x << endl;
            cout << "The value of y : " << y << endl;
        }
};

int Points::line_no = 0;

Points::Points(int a , int b){
    line_no++;
    x = a;
    y = b;
};

int distancePoints(Points p1 , Points p2){
    int ovr_x = p2.x - p1.x;
    int ovr_y = p2.y - p1.y;

    int ovr = (ovr_x*ovr_x) + (ovr_y*ovr_y);
    return sqrt(ovr);
}


int main(){
    Points p1(0,1);
    p1.displayPoints();
    
    Points p2(0,6);
    p2.displayPoints();
    cout << "The distance is : " << distancePoints(p1,p2) << endl;

    return 0;
}

