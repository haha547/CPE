#include<iostream>
using namespace std;
int main (){
    int testCase;
    while(cin >> testCase, testCase!=0){
        for (int m = 0 ; m < testCase/9 ; m++){
            int k = testCase-(m*9);
            if(k/10 == 0){          
                cout << m << k;
            }
        }
    }
    return 0;
}