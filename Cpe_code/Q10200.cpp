#include<iostream>
using namespace std;
bool prime(long int a){
    if (a%2 != 0){
        return false;
    }
    for (int i = 3 ;i < a ;i ++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}
int main (){
    long int a,b;
    while(cin >> a >> b){
        int sum = 0;
        for (int i = a ; i <= b ; i ++){
            sum += prime(i*i+i+41);
        }
        float ans= (float)sum/(b-a+1) ;
        ans = (double)((int)(ans*10000)/10000.00);
        cout << ans*100 << endl;
    }
    return 0;
}