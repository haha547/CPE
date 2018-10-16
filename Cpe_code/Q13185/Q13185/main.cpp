//
//  main.cpp
//  Q13185
//
//  Created by 徐浩哲 on 2018/10/16.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testTimes;
    cin >> testTimes;
    while (testTimes--) {
        int sum,enter;
        cin >> enter;
        sum = 0;
        for (int i = 1 ; i < enter ; i++) {
            if (enter % i == 0 ) {
                sum = sum + i;
            }
        }
        if (sum == enter) {
            cout << "perfect\n";
        }
        else if (sum < enter){
            cout << "deficient\n";
        }
        else{
            cout << "abundant\n";
        }
    }
    return 0;
}
