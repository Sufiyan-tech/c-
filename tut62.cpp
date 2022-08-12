#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator itr;
    for(itr = lst.begin() ; itr != lst.end() ; itr++){
        cout << *itr << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(5);

    // list<int> :: iterator itr;

    // itr = list1.begin();

    // cout << *itr << endl;
    // itr++;
    // cout << *itr << endl;
    // itr++;
    // cout << *itr << endl;
    // itr++;
    // cout << *itr << endl;
    // itr++;

    display(list1);
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(30);

    // list1.sort();

    list1.reverse();

    display(list1);


    list<int> list2(3);

    list<int> :: iterator itr = list2.begin();

    *itr = 15;
    itr++;
    *itr = 25;
    itr++;
    *itr = 35;

    display(list2);
    list1.sort();
    list2.sort();

    list1.merge(list2);

    display(list1);



    return 0;
}