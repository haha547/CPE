//
//  main.cpp
//  10409
//
//  Created by 徐浩哲 on 2018/10/10.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int top = 1, north = 2, east = 3, south = 5, west = 4, down = 6;
    int rollerTimes;
    cin >> rollerTimes;
    while (rollerTimes--) {
        char commend;
        for (int i = 0; i < rollerTimes; i++) {
            cin >> commend;
            switch (commend) {
                case 'n':
                    top = south;
                    south = down;
                    down = north;
                    north = top;
                    break;
                    
                case 's':
                    top = north;
                    north = down;
                    down = south;
                    south = top;
                    break;
                    
                case 'w':
                    top = east;
                    east = down;
                    down = west;
                    west = top;
                    break;
                    
                case 'e':
                    top = west;
                    west = down;
                    down = east;
                    east = top;
                    break;
            }
        }
    }
    cout << top << endl;
    return 0;
}
