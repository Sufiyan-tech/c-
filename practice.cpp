#include <iostream>

using namespace std;

template <class T>
class Number{
    
    public:
        T a;
        friend void swapNumber(Number<T>* , Number<T>*);
        Number(T a){
            this->a = a;
        }

        void display(){
            cout << "The value of a : " << a << endl;
        }
};

template <class T>
void swapNumber(Number<T> * n1 , Number<T> * n2){
    T temp = n1->a;
    n1->a = n2->a;
    n2->a = temp; 
}

int main(){
    Number<int> n1(10);
    Number<int> n2(20);

    n1.display();
    n2.display();

    swapNumber<int>(&n1 , &n2);
    
    n1.display();
    n2.display();

    return 0;

}
