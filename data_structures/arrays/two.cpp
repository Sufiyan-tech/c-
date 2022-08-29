#include<iostream>

using namespace std;

int main(){
    // // int x[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // int x[3][4] = {{0,1,2,3} , {4,5,6,7}, {8,9,10,11}};

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int x[3][4];

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout << "Enter Value For Row " << (i+1) << " Column " << (j+1) << " : ";
    //         cin >> x[i][j];
    //     }
    // }

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int** x = new int*[3];

    // for(int i = 0 ; i < 3 ; i++){
    //     x[i] = new int[4];
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout << "Enter Value For Row " << (i+1) << " Column " << (j+1) << " : ";
    //         cin >> x[i][j];
    //     }
    // }

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int x[3][2] = {{1,2} , {3,4} , {5,6}};

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 2 ; j++){
    //         cout << "Element At x[" << (i+1) << "][" << (j+1) << "] : " << x[i][j] << endl;
    //     }
    // }

    // int x[2][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

    // int x[2][3][4] = {
    //     {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
    //     {{13,14,15,16},{17,18,19,20},{21,22,23,24}}
    //     };


    // for(int i = 0 ; i < 2 ; i++){
    //     for(int j = 0 ; j < 3 ; j++){
    //         for(int k = 0 ; k < 4 ; k++){
    //             cout << x[i][j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    int x[2][3][4];
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 4 ; k++){
                cout << "Enter Value For x[" << (i+1) << "][" << (j+1) << "][" << (k+1) << "] : " ;
                cin >> x[i][j][k];
            }
        }
    }

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 4 ; k++){
                cout << x[i][j][k] << " ";
            }
            cout << endl;
        }
    }




    return 0;
}