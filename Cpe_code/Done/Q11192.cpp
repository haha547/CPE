#include <iostream>
using namespace std;
int main(){
    int testCases;
    while (cin >> testCases){
        if (testCases == 0) break;
        string enter;
        cin >> enter;
        int iter = enter.length()/testCases;
        for (int i = 0; i < enter.length(); ++i) {
            if((i%iter) == (iter-1)){
                for (int j = i; j >= i-iter+1 ; --j) {
                    cout << enter[j];
                }
            }
        }

        cout << endl;
    }
    return 0;
}
