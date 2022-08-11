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
            T * sort_arr = new T[size];
            for(int i = 0 ; i < size ; i++){
                bool secondLoop = true;
                bool find;
                T val;
                if( i == (size-1) ){
                    for(int x = 0 ; x < size ; x++){
                        if((this->checkElement(sort_arr,arr[x]) == 0)){
                            sort_arr[i] = arr[x];
                            break;
                        }
                    }
                }else{
                    for(int j = 0 ; j < size && secondLoop ; j++){
                        bool thirdloop = true;
                        find = false;
                        for(int k = 0 ; k < size && thirdloop ; k++){
                            if( (arr[j] != arr[k]) && (this->checkElement(sort_arr,arr[k]) == 0 )  && (this->checkElement(sort_arr,arr[j]) == 0) ){
                                if(arr[j] < arr[k]){
                                    find = true;
                                }else{
                                    find = false;
                                    thirdloop = false;
                                }
                            }
                        }
                        
                        if(find == 1){
                            secondLoop = false;
                            val = arr[j];
                        }
                    }
                    sort_arr[i] = val;
                }
                
            }
            
            for(int b = 0 ; b <= sizeof(sort_arr)-2 ; b++){
                cout << sort_arr[b] << endl;
            }

            // cout << endl << endl << endl;

            // for (int i = 0; i < 10; i++) {
            //     int * temp = new int[15000000000];
            //     for (int k = 0; k < 15000000000; k++) {
            //         temp[k] = 0;
            //     }
            //     _sleep(2000);
            //     delete temp;
            // }

            // for(int b = 0 ; b < 5 ; b++){
            //     cout << &sort_arr[b] << endl;
            // }
        }
};

int main(){
    Vector <int>vec(7);
    vec.arr[0] = 100;
    vec.arr[1] = 150;
    vec.arr[2] = 120;
    vec.arr[3] = 120;
    vec.arr[4] = 110;
    vec.arr[5] = 90;
    vec.arr[6] = 50;

    vec.sortArray();

    // vec.sortArray();
    return 0;
}
