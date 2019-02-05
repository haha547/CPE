#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int N, R;
    while(cin >> N >> R){
        bool vol[10001] ={0};
        int temp = 0;
        for (int i = 0 ; i < R ; i ++){
            cin >> temp ;
            vol[temp] = true;
        }
        if(N == R) {
            cout << "*" << endl;
        }
        else{
            for (int i = 1 ; i <= N ; i++){
                if (!vol[i]){
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}