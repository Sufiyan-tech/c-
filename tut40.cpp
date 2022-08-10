#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator{
    protected:
        float addition(float num1 , float num2){
            return num1+num2;
        }

        float subtraction(float num1 , float num2){
            return num1-num2;
        }

        float multiplication(float num1 , float num2){
            return num1*num2;
        }

        float division(float num1 , float num2){
            return num1/num2;
        }
};

class ScientificCalculator{
    protected:   
        int factorial(int num){
            if(num <= 1){
                return 1;
            }
            return num * factorial(num-1);
        }

        float power(int num , int pow){
            int n = num;
            for(int i = 0 ; i < (pow-1) ; i++){
                n *= num;
            }
            return n;
        }

        float sine(float degree){
            float radian = degree*M_PI/180;
            return sin(radian);
        }

        float cosine(float degree){
            float radian = degree*M_PI/180;
            return cos(radian);
        }

};

class HybridCalculator : protected SimpleCalculator , protected ScientificCalculator{
    public:
        void getSimpleCalculator(){
            char opt;
            float num1,num2;
            cout << "Enter Option Key For Applying Action" << endl;
            cout << "Option A For Addition" << endl;
            cout << "Option B For Substraction" << endl;
            cout << "Option C For Multiplication" << endl;
            cout << "Option D For Division" << endl;
            cin >> opt;

            cout << "Enter Value For Num 1 " << endl;
            cin >> num1;
            cout << "Enter Value For Num 2 " << endl;
            cin >> num2;

            switch(opt){
                case 'A':
                    cout << "The Addition Is : " << addition(num1 , num2) << endl;
                    break;
                case 'B':
                    cout << "The Substraction Is : " << subtraction(num1 , num2) << endl;
                    break;
                case 'C':
                    cout << "The Multiplication Is : " << multiplication(num1 , num2) << endl;
                    break;
                case 'D':
                    cout << "The Division Is : " << division(num1 , num2) << endl;
                    break;
                default:
                    cout << "Invalid Key" << endl;
                    break;
            }

        }

        void getScientificCalculator(){
            char opt;
            cout << "Enter Option Key For Applying Action" << endl;
            cout << "Option A For Factorial" << endl;
            cout << "Option B For Power" << endl;
            cout << "Option C For Sin" << endl;
            cout << "Option D For Cosine" << endl;
            cin >> opt;

            switch(opt){
                case 'A':{
                    int num;
                    cout << "Enter The Number : " << endl;
                    cin >> num;
                    cout << "The Factorial Of " << num << " Is : " << factorial(num);
                    break;
                }
                case 'B':{
                    int num,pow;
                    cout << "Enter The Number : " << endl;
                    cin >> num;
                    cout << "Enter The Power : " << endl;
                    cin >> pow;
                    cout << "The Power " << pow << " Of " << num << " Is : " << power(num , pow) << endl; 
                    break;
                }
                case 'C':{
                    float degree;
                    cout << "Enter The Value In Degree : " << endl;
                    cin >> degree;
                    cout << "The Sin Is : " << sine(degree) << endl;
                    break;
                }
                case 'D':{
                    float degree;
                    cout << "Enter The Value In Degree : " << endl;
                    cin >> degree;
                    cout << "The Cos Is : " << cosine(degree) << endl;
                    break;
                } 
                default:
                    break;
            }

        }

        void applyAction(){
            char opt;
            cout << "Enter Your Calculator Type " << endl;
            cout << "Option A For Simple Calculator" << endl;
            cout << "Option B For Scientific Calculator" << endl;
            cin >> opt;
            if(opt == 'A'){
                getSimpleCalculator();
            }else{
                getScientificCalculator();
            }
        }

};


int main(){
    HybridCalculator hc;
    hc.applyAction();
    return 0;
}