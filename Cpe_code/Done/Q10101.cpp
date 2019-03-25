#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void fun (unsigned long long int);
int main (){
    unsigned long long int a;
    unsigned long long int countNum = 0;
    while(cin >> a ){
        cout <<setw(4) << right << ++countNum << ".";
        if (a)
            fun(a);
        else 
            cout << " 0";
        cout << endl;
        }
    return 0;
}
void fun (unsigned long long input){

    if(input == 0)return ;
    if (input >= 10000000){
        fun(input / 10000000);
        cout << " kuit";
        input %= 10000000; 
    }

    if (input >= 100000){
        fun(input / 100000);
        cout << " lakh";
        input %= 100000 ; 
    }

    if (input >= 1000){
        fun(input / 1000);
        cout << " hajar";
        input %= 1000 ; 
    }

    if (input >= 100){
        fun(input / 100);
        cout << " shata";
        input %= 100; 
    }
    if (input)
        cout << " " << input;
}