//
//  main.cpp
//  Q12208
//
//  Created by 徐浩哲 on 2018/10/16.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int countOne(int,int);

int main() {
    int a,b;
    int caseTime = 0;
    while (cin >> a >> b ){
        if (a <=0 && b <=0){
            break;
        }

        int tempNum = log2(b)+1;
        int sumOne = 0;
        for (int i = a ; i <= b ; i++) {
            sumOne = sumOne + countOne(i,tempNum);
        }
        caseTime++;
        cout << "Case " << caseTime << ": " << sumOne << endl;
    }
    return 0;
}

int countOne(int a, int b){
    int test[b];
    int countO = 0;
    for (int i = b-1 ; i >= 0 ; i--) {
        test[i] = a%2;
        a=a/2;
    }
    for (int i = 0 ; i < b ; i++ ) {
        if (test[i] == 1 ) {
            countO++;
        }
    }
    return countO;
}
