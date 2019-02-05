#include<iostream>
using namespace std;
int countF(int a ,int b ){
    if (a == 1){
        return b;
    }
    else if (a % 2 == 1){
        b++;
        return countF((a*3)+1, b);
    }
    else{
        b++;
        return countF(a/2, b);
    }
}

int main (){
    int n ,m;
    while(cin >> n >> m){
        int maxNum = 0;
        int swapON = 0;
        if (n > m){
            int temp;
            temp = n;
            n = m;
            m = temp;
            swapON = 1;
        }
        for (int i = n ; i <= m ; i ++){
            if (countF(i ,1) > maxNum){
                maxNum = countF(i ,1);
            }
        }
        if (swapON == 1){
            cout << m << " " << n << " " << maxNum << endl;
        }
        else{
            cout << n << " " << m << " " << maxNum << endl;
        }
    }
    return 0;
}