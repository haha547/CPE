#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    while (testCase--){
        int tranNum, tran[51]={0},switchCount=0;
        cin >> tranNum;
        for (int i = 0; i < tranNum; ++i) {
            cin >> tran[i];
        }

        for (int i = 0; i < tranNum; ++i) {
            for (int j = 0; j < tranNum-1-i; ++j) {
                if(tran[j] > tran[j+1]){
                    swap(tran[j],tran[j+1]);
                    switchCount++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",switchCount);

    }
    return 0;
}
