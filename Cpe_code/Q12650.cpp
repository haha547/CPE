#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int N, R;
    while(cin >> N >> R){
        if (N == R){
            int vol[R];
            for (int i = 0 ; i < R ; i++){
                cin >> vol[i];
            }
            cout << "*" <<endl;
        }
        else{
            int vol[N];
            int temp = 0;
            for (int i = 0 ; i < R ; i++){
                cin >> temp;
                vol[temp-1] = 1;
            }
            for (int i = 0 ; i < N ; i++){
                if (vol[i] != 1){
                    cout << i+1 << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}