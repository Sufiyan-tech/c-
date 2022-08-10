#include <iostream>

using namespace std;

template <class T>
class Sufiyan{
    T data;
    public:
        Sufiyan(T data){
            this->data = data;
        }

        void display(void);
};

template <class T>
void Sufiyan<T>::display(void){
    cout << data << endl;
}

void func(int a){
    cout << "Default The value of a " << a << endl; 
}

template<class T>
void func(T a){
    cout << "Template The value of a " << a << endl; 
}

int main(){
    func('s');
    return 0;
}
