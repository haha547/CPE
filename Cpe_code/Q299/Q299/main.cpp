//
//  train swapping.cpp
//  Q299
//
//  Created by 徐浩哲 on 2018/9/21.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int testTimes;
    cin >> testTimes;
    while (testTimes --){
        int howLongTheTrainIs;
        int carriage[55];
        cin >> howLongTheTrainIs;
        for (int i = 0 ; i < howLongTheTrainIs; i++) {
            cin >> carriage[i];
        }
        int swap_count = 0;
        for (int i = 0; i < howLongTheTrainIs; i++) {
            for (int j = howLongTheTrainIs - 1 ; j < i; j --) {
                if (carriage[j-1] > carriage [j]){
                    swap(carriage[j-1], carriage[j]);
                    swap_count ++;
                }
                cout << "Optimal train swapping takes " << swap_count <<" swaps." << endl;
            }
        }
    }
    return 0;
}
