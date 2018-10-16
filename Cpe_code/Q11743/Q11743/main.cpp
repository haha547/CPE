//
//  main.cpp
//  Q11743
//
//  Created by 徐浩哲 on 2018/9/25.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int testTimes;
    cin >> testTimes;
    while (testTimes--) {
        int oddSum = 0;
        int evenSum = 0;
//        int totalSum = 0;
        int creditCard[4];
        for (int i = 0; i < 4 ; i ++) {
            cin >> creditCard[i];
            evenSum = creditCard[i]/1000 + (creditCard[i]/10)%10;
            
            evenSum = evenSum * 2;
            oddSum =creditCard[i]%1000 + (creditCard[i]/100)%10 ;
        }
    }
    return 0;
}
