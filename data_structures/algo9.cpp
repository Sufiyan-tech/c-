#include<vector>
#include<iostream>

using namespace std;

class Shape{
    public:
        virtual void draw() = 0;
        virtual ~Shape(){};
};

class Circle : public Shape{
    public:
        void draw(){
            cout << "Circle Draw" << endl;
        }

        ~Circle(){
            cout << "~Circle" << endl; 
        }
};

class Triangle : public Shape{
    public:
        void draw(){
            cout << "Triangle Draw" << endl;
        }

        ~Triangle(){
            cout << "~Triangle" << endl;
        }
};

class Square : public Shape{
    public:
        void draw(){
            cout << "Square Draw" << endl;
        }

        ~Square(){
            cout << "~Square" << endl;
        }
};


int main(){
    typedef vector<Shape*> Container;
    typedef Container::iterator Iter;

    Container shapes;
    shapes.push_back(new Circle);
    shapes.push_back(new Square);
    shapes.push_back(new Triangle);

    for(Iter i = shapes.begin() ; i != shapes.end() ; i++){
        (*i)->draw();
    }

    for(Iter j = shapes.begin() ; j != shapes.end() ; j++){
        delete *j;
    }

    return 0;
}