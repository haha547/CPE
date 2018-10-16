//
//  main.cpp
//  Q12650
//
//  Created by 徐浩哲 on 2018/10/10.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,R,card;
    bool returnCard[10001] = {0};
    while (cin >> n >> R) {
        if (n == R){
            cout << "*" <<endl;
        }
        else{
            for (int i = 0 ; i < R ; i++) {
                cin >> card;
                returnCard[card] = true;
            }
            for (int i = 1 ; i < n ; i++){
                if (returnCard[i] == false) {
                    cout << i << " " ;
                }
            }
        }
    }
    return 0;
}
