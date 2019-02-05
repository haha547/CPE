//happy number
#include<iostream>
using namespace std;

int f(int a){
    int s= 0;
    while(a){
        int t = a % 10;
        s += t*t;
        a = a/10;
    }
    if (s >=10){
        return f(s);
    }
    else{
        return s;
    }
}

int main (){
    int testTimes;
    cin >> testTimes;
    for(int i = 1 ; i <= testTimes ; i ++){
        int enter;
        cin >> enter;
        if (f(enter) == 1 ){
            cout << "Case #" << i <<  ": "<< enter <<" is a Happy number." << endl;
        }
        else{
            cout << "Case #" << i <<  ": "<< enter <<" is an Unhappy number." << endl;
        }
    }
    return 0;
}