#include<iostream>
using namespace std;
int main (){
    int n, m;
    while(cin >> n >> m  &&  n!= 0 && m != 0 ){
        int carry = 0 ;
        while(n != 0 && m != 0){
            int test = (n % 10) + (m % 10);
            if(test / 10 == 1){
                carry++;
            }
            n = n / 10;
            m = m / 10;
        }
        if (carry == 0){
            cout << "No carry operation." << endl;
        }
        else if (carry == 1 ){
            cout << "1 carry operation." << endl;
        }
        else{
            cout << carry << " carry operations." << endl;
        }
    }
    return 0;
}