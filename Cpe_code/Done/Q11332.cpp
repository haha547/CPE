#include<iostream>
using namespace std;
int f(long long int a , int b){
    if (a == 0 ){
        if(b/10 == 0){
            return b;
        }else{
            return f(b, 0);
        }
    }else{
        return f(a/10, b+a%10);
    }
}
int main (){
    long long int testSets;
    while(cin >> testSets && testSets != 0){
        cout << f(testSets, 0) << endl;
    }
    return 0;
}