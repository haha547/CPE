#include<iostream>
#include <algorithm>
using namespace std;
int main (){
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        int R;
        cin >> R;
        int stree[R];
        for (int i = 0 ; i < R ; i ++){
            cin >> stree[i];
        }
        sort(stree,stree+R);
    }
    return 0;
}