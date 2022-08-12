#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){
    map<string , int> marksMap;

    marksMap["Sufiyan"] = 54;
    marksMap["Sara"] = 78;
    marksMap["Saif"] = 90;

    marksMap.insert({{"Adnan" , 10} , {"Harry" , 78}});

    map<string , int> :: iterator itr;
    
    for(itr = marksMap.begin() ; itr != marksMap.end() ; itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << marksMap.size() << endl;
    cout << marksMap.max_size() << endl;
    cout << marksMap.empty() << endl;



    return 0;
}
