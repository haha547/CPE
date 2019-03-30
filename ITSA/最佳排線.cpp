#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int mat[k+1][k+1];
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            cin >> mat[i][j];
        }
    }
    return 0;
}