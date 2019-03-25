#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        int r,temp;
        vector<int> sv;
        cin >> r;
        for(int i = 0; i < r; i++){
            cin >> temp;
            sv.push_back(temp);
        }
        sort(sv.begin(),sv.end());
        int mid=sv[r/2];
        int sum = 0;
        for(int i = 0; i < r; i++){
            sum += abs(sv[i] - mid);
        }
        cout << sum << endl;
    }
    return 0;
}