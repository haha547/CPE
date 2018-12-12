#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int testTimes, stickLen;
    cin >> testTimes;
    cin >> stickLen;
    int stick[stickLen];
    while(testTimes--){  
        int sum = 0;
        for (int i = 0 ; i < stickLen ; i ++){
            cin >> stick[i];
            sum += stick[i];
        }
        sort(stick ,stick+stickLen);
        if (stick[stickLen-1] > sum / 4){
            cout << "NO" << endl;
        }
    }
    return 0;
}