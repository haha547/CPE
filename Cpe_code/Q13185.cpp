#include <iostream>
using namespace std;
int main (){
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        int testData;
        int sum = 0;
        cin >> testData;
        for (int i = 1 ; i < testData ; i ++){
            if (testData % i == 0){
                sum += i;
            }
        }
        if (sum == testData){
                cout << "perfect" << endl;
            }
            else if (sum < testData){
                cout << "deficient" << endl;
            }
            else{
                cout << "abundant" << endl;
            }
    }
    return 0;
}