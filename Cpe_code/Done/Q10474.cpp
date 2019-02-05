#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n , m;
    int caseTimes = 1;
    while(cin >> n >> m ,n+m!=0 ){
        int card[n];
        int guess[m];
        cout << "CASE# " << caseTimes++ << ":" << endl;
        for (int i = 0 ; i < n ; i++){
            cin >> card[i];
        }
        sort(card,card+n);
        while(m--){
            int temp;
            int error = 0;
            cin >>temp;
            for(int i = 0 ;i < n ; i++){
                if(card[i] != temp){
                    error++;
                }else{
                    cout << temp << " found at " << i+1 << endl;
                    break;
                }
                
            }
            if (error == n ){
                cout << temp << " not found" << endl;
            }
        }
    }
    return 0;
}