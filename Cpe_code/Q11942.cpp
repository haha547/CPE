#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int testTimes;
    cin >> testTimes;
    cout << "Lumberjackers:" << endl;
    while(testTimes--){
        int input[10];
        for (int i = 0 ; i < 10 ; i ++){
            cin >> input[i];
        }
        int p_count = 0;
        int n_count = 0;
        for (int i = 0 ; i < 9 ; i ++){
            if (input[i] >= input[i+1]){
                p_count ++;
            }
            else if(input[i] <= input[i+1]){
                n_count++;
            }
        }
        if (p_count == 9 || n_count == 9){
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;
        }
    }
    return 0 ;
}