#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

template<class Cont , class PtrMenFun>
void apply(Cont& c , PtrMenFun f){
    typename Cont::iterator it = c.begin();
    while(it != c.end()){
        ((*it).*f)();
        ++it;
    }
}

class Z{
    int i;
    public:
        Z(int ii) : i(ii){};

        void g(){
            ++i;
        }

        friend ostream& operator<<(ostream& out , const Z& z){
            return out << z.i;
        }
};

int main(){
    ostream_iterator<Z> out(cout , " ");
    vector<Z> vz;
    for(int i = 0 ; i < 10 ; i++){
        vz.push_back(Z(i));
    }

    copy(vz.begin() , vz.end() , out);
    cout << endl;
    apply(vz , &Z::g);
    copy(vz.begin() , vz.end() , out);


}

