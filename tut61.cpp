#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &vec){
    cout << "The Vector Is : " << endl;
    for(int i = 0 ; i < vec.size() ; i++){
        cout << "The Value At " << i << " Is : " << vec[i] << endl;
        // cout << "The Value At " << i << " Is : " << vec.at(i) << endl;
    }
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);

    vec2.push_back('A');
    vec2.push_back('B');
    vec2.push_back('C');
    vec2.push_back('D');

    display(vec4);

    // vector<int> vec;
    
    // int size;

    // cout << "Enter Size Of Vector : " << endl;
    // cin >> size;
    
    // int element;
    // for(int i = 0 ; i < 4 ; i++){
    //     cout << "Enter The Value : " << endl;
    //     cin >> element;
    //     vec.push_back(element);
    // }

    // vec.pop_back();
    // vec.pop_back();
    // vector<int> :: iterator iter = vec.begin();
    // vector<int> :: iterator iter = vec.end();

    // display(vec);
    // vec.insert(iter , 566);
    // vec.insert(iter+1 , 566);
    // vec.insert(iter-1 , 566);
    // vec.insert(iter , 10 , 566);
    // display(vec);
 

    return 0;
}