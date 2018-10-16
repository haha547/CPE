//
//  main.cpp
//  Q145
//
//  Created by 徐浩哲 on 2018/10/10.
//  Copyright © 2018 徐浩哲. All rights reserved.
//

#include <iostream>
#include <iomanip>


using namespace std;



int main() {
    char level;

    
    int cut[5] = {0,480,1080,1320,1440};
    
    float totalcost;
    float coastA[4] = {0.02,0.1,0.06,0.02};
    float coastB[4] = {0.05,0.25,0.15,0.05};
    float coastC[4] = {0.13,0.53,0.33,0.13};
    float coastD[4] = {0.17,0.87,0.47,0.17};
    float coastE[4] = {0.3,1.44,0.8,0.3};
    
    while (cin >> level) {
        int a,b,c,d;
        string phoneNum;
        if (level == '#') {
            cout << "Fuck you!!!!!";
            break;
        }
        else{
            cin >> phoneNum;
            cin >> a >> b >> c >> d;
            int startTime = a*60 + b;
            int endTime = c*60 + d;
            switch (level) {
                case 'A':
                    for (int i = 0 ; i < 5; i++) {
                        if (startTime >= cut[i] && endTime <= cut[i+1]) {
                            totalcost = (endTime-startTime)*coastA[i] ;
                            
                        }
                    }
                    break;
            }
        }
    }
    
    

    return 0;
}

void printAns (string phone,int a,int b,char level, float costP){
    cout << setw(10) << phone;
    cout << setw(6) << a;
    cout << setw(6) << b;
    cout << setw(6);
    cout << setw(4) << level;
    cout << setw(8) << costP;
}
