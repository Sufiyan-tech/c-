#include<iostream>

using namespace std;

int main(){
    int dim;
    string odd_ch,even_ch;
    cout << "Enter Dimension : " << endl;
    cin >> dim;

    for(int i = 1 ; i <= dim ; i++){
        if((i%2) != 0){
            odd_ch = "#";
            even_ch = " ";
        }else{
            odd_ch = " ";
            even_ch = "#";
        }

        for(int j = 1 ; j <= dim ; j++){
            if((j%2)!=0){
                cout << odd_ch;
            }else{
                cout << even_ch;
            }
        }
        cout << endl;
    }

    return 0;
}