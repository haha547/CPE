#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string enter;
    while (cin >> enter){
        long long int oddSum = 0 , evenSum = 0;
        if (enter == "0"){
            break;
        }
        for (int i = 0 ; i < enter.length() ; i = i + 2){
           if (enter[i] != 0){
               oddSum += enter[i] - 48;
           }
        }
        for (int i = 1 ; i < enter.length() ; i = i + 2){
           if (enter[i] != 0){
               evenSum += enter[i] - 48;
           }
        }
        if(abs(oddSum-evenSum) % 11 == 0 ){
            cout << enter << " is a multiple of 11." << endl;
        }
        else{
            cout << enter << " is not a multiple of 11." << endl;
        }

    }
    return 0;
}