#include <iostream>
using namespace std;
int countf(int a, int b){
    if(a == 1){
        return b+1;
    }
    else if (a % 2 == 1){
        b++;
        return countf(a/2, b);
    }
    else {
        return countf(a/2, b);
    }
}
int main() {
    unsigned long long int n ,m;
    int counting = 1;
    while (cin >> n >> m && n != 0 && m!= 0){
        int ans =0;
        for (int i = n ; i <= m ; i ++){
            ans += countf(i ,0);
        }
        cout << "Case " << counting << ": " << ans << endl;
        counting ++;
    }
    return 0;
}