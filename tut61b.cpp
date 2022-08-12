#include <iostream>
#include <vector>

using namespace std;

template <class T>
class MyVector{
    public:
        vector<T> * vec = new vector<T>();
        void push(T val){
            vec->push_back(val);
        }

        void pop(){
            vec->pop_back();
        }

        void insertFirst(int val){
            vector<int> :: iterator iter = vec->begin();
            vec->insert(iter , val);
        }

        void insertLast(int val){
            vector<int> :: iterator iter = vec->end();
            vec->insert(iter , val);
        }

        void swapVector(vector<T> & vec2){
            vec->swap(vec2);
        }
 
        void display(){
            for(int i = 0 ; i < vec->size() ; i++){
                cout << vec->at(i) << endl;
            }
        }
};

int main(){
    // MyVector<int> myvec;
    // myvec.push(10);
    // myvec.push(20);
    // myvec.push(30);

    // vector<int> vec2(3);
    // vec2.push_back(40);
    // vec2.push_back(50);
    // vec2.push_back(60);

    // myvec.display();

    // myvec.swapVector(vec2);

    // myvec.display();

    // cout << myvec.vec->size() ;
    vector<int> * arr[2];
    arr[0] = new  vector<int>();
    arr[1] = new  vector<int>();

    arr[0]->push_back(1);
    arr[0]->push_back(2);

    arr[1]->push_back(3);
    arr[1]->push_back(4); 

    for(int i = 0; i < sizeof(arr) ; i++){
        for(int j = 0 ; j < arr[i]->size() ; j++){
            cout << arr[i]->at(j) <<  " ";
        }
        cout << endl;
    }


    return 0;
}