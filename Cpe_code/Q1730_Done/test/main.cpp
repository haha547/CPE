//
//  main.cpp
//  test
//
//  Created by 徐浩哲 on 2018/10/21.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    unsigned long long int enter;
    while (cin >> enter) {
        if (enter != 0) {
            clock_t start, stop;
            start = clock();
            
            unsigned long long int sumF = 0 ;
            unsigned long long int sumR = 0 ;
            for (unsigned long long int i = 1 ; i <= enter/2 ; i++ ) {
                sumF += i*(enter/i);
            }
            for (unsigned long long int i = enter/2+1; i <= enter ; i++) {
                sumR += i;
            }
            stop = clock();
            cout << sumR+sumF-1<<endl;
            cout << double(stop - start) / CLOCKS_PER_SEC <<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
