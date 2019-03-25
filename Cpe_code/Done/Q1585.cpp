#include<iostream>
using namespace std;
int main (){
    int testTimes;
    cin >> testTimes;
    while(testTimes -- ){
        string gave;
        int score = 0;int plus = 0;
        cin >> gave;
        for(int i = 0 ; i < gave.length() ; i ++){
            if (gave[i] == 'O'){
                plus ++;
                score += plus;
            }else{
                plus = 0;
                score += plus;
            }
        }
        cout << score << endl;

    }
    return 0;
}