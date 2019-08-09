#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double cost[5][3]={
        {0.10, 0.06, 0.02},
        {0.25, 0.15, 0.05},
        {0.53, 0.33, 0.13},
        {0.87, 0.47, 0.17},
        {1.44, 0.80, 0.30}};

int main(){
    char step;
    double price;
    while (cin >> step && step != '#'){
        char number[8];
        cin >> number;
        int time[4],stepT1=0,stepT2=0,stepT3=0;
        price=0;
        cin >> time[0] >> time[1] >> time[2] >> time[3];
        getchar();
        int startTime= time[0]*60+time[1],endtime= time[2]*60+time[3];
        int aDay[1440]={0};
        if(startTime >= endtime){
            for (int i = startTime; i < 1440; ++i) aDay[i] = 1;
            for (int j = 0; j < endtime; ++j) aDay[j] = 1;
        }
        else{
            for (int i = startTime; i < endtime; ++i) aDay[i] = 1;
        }
        for (int i = 0; i < 480; ++i) {
            if(aDay[i] == 1) stepT3++;
        }
        for (int i = 480; i < 1080; ++i) {
            if(aDay[i] == 1) stepT1++;
        }
        for (int i = 1080; i < 1320; ++i) {
            if(aDay[i] == 1) stepT2++;
        }
        for (int i = 1320; i < 1440; ++i) {
            if(aDay[i] == 1) stepT3++;
        }
        price= stepT1*cost[step-'A'][0] + stepT2*cost[step-'A'][1] + stepT3*cost[step-'A'][2];

        printf("%10s%6d%6d%6d%3c%8.2f\n",number,stepT1,stepT2,stepT3,step,price);
    }
    return 0;
}
