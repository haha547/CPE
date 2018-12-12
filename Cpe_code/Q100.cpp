#include<iostream>
using namespace std;
int countF(int a ){
    int lenght = 1;
    while(true){
        if (a == 1){
            return lenght;
        }
        else if (a % 2 == 1){
            a = 3 * a + 1;
        }
        else{
            a = a/2;
        }
        lenght++;
    }
    return lenght;
}
int main (){
    int n ,m;
    int maxNum = 0;
    while(cin >> n >> m){
        bool swapON = false;
        if (n >= m){
            int temp;
            temp = n;
            n = m;
            m = temp;
            swapON = true;
        }
        for (int i = n ; i <= m ; i ++){
            if (maxNum <= countF(i)){
               maxNum = countF(i);
            }
        }
        if (swapON == true){
            cout << m << " " << n << " " << maxNum << endl;
        }
        else{
            cout << n << " " << m << " " << maxNum << endl;
        }
    }
    return 0;
}