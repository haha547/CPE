/*UVA 13185*/
#include<iostream>
using namespace std;
int main() {
    int testCases;
    cin >> testCases;
    while(testCases--){
        int num,ans=0;
        cin >> num;
        for (int i = 1 ; i < num ;i++){
            if(num%i == 0){
                ans+=i;
            }
        }
        if(ans == num){
            cout << "perfect" << endl;
        }
        else if(ans>num){
            cout << "abundant" << endl;
        }
        else{
            cout << "deficient" << endl;
        }
    }
    return 0;
}
