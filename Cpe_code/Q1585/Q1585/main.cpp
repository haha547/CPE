//
//  main.cpp
//  Q1585
//
//  Created by 徐浩哲 on 2018/10/23.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int testTimes;
    cin >> testTimes;
    while (testTimes -- ) {
        string input;
        char inputC[input.length()+1];
        cin >> input;
        strcpy(inputC, input.c_str());
        int score = 0;
        int countC = 0;
        
        for (int i = 0 ; i < input.length() ; i++) {
            if (inputC[i] == 'O') {
                countC++;
                score += countC;
            }
            else{
                countC = 0;
                score += countC;
            }
        }
        cout << score <<endl;
        
    }
    return 0;
}
