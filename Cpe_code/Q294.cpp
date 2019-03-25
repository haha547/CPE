#include <iostream>
using namespace std;
int fun (int,int);
int main(){
    bool prime[1000];
    
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        int a,b;
        cin >> a >> b;
        int ans=0,ansCount=0;
        cout << "Between " << a << " and " << b << ", " << ans << " has a maximum of " << ansCount << " divisors." << endl;
    }
    return 0;
}
