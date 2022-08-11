#include <iostream>

using namespace std;

template <class T>
class Vector{
    public:
        T * arr;
        int size;
        Vector(int size){
            this->size = size;
            this->arr = new T[this->size];
        }

        bool checkElement(int * arr2 , int val){
            bool chk = false;
            for(int i = 0; i < sizeof(arr2)+1 ; i++){
                if(val == *(arr2+i)){
                    chk = true;
                    break;
                }
            }
            return chk;
        }

        void sortArray(){
            int sort_arr[5];
            for(int i = 0 ; i < size-1 ; i++){
                bool mainLoop = true;
                for(int j = 0; j < size && mainLoop; j++){
                    bool find = false;
                    for(int k = 0 ; k < size ; k++){
                        if( ( arr[j] != arr[k] ) && ( arr[j] < arr[k] ) && (this->checkElement(sort_arr , arr[j]) == 0) ){
                            find = true;
                        }else if(arr[j] == arr[k]){

                        } else {
                            find = false;
                            break;
                        }
                        
                    }
                    
                    if(find == true){
                        sort_arr[i] = arr[j];
                       break;
                    }
                }
            }

            for(int b = 0 ; b < sizeof(sort_arr) ; b++){
                cout << sort_arr[b] << endl;
            }
        }
};

int main(){
    Vector <int>vec(5);
    vec.arr[0] = 20;
    vec.arr[1] = 30;
    vec.arr[2] = 40;
    vec.arr[3] = 50;
    vec.arr[4] = 10;

    vec.sortArray();

    // vec.sortArray();
    return 0;
}
