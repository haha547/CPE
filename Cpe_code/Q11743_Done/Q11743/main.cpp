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
        int cube[4];
        int oddSum = 0 , evenSum = 0;
        for (int i = 0 ; i < 4 ; i ++ ) {
            cin >> cube[i];
        }
        for (int i = 0 ; i < 4 ; i++ ) {
            evenSum = evenSum + cube[i]/100%10 + cube[i]%10;
            int temp1 = 0 , temp2 = 0;
            temp1 = (cube[i]/1000)*2;
            temp2 = (cube[i]/10%10)*2;
            
            if (temp1 /10 != 0) {
               oddSum = oddSum + temp1/10+temp1%10;
            }
            else{
                oddSum = oddSum + temp1;
            }
            
            if (temp2 /10 != 0) {
                oddSum = oddSum + temp2/10+temp2%10;
            }
            else{
                oddSum = oddSum + temp2;
            }
        }

        if ((evenSum+oddSum) % 10 == 0) {
            cout << "Valid\n";
        }
        else{
            cout << "Invalid\n";
        }
    }
    return 0;
}
