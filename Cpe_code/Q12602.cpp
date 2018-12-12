#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        char test[8];
        for (int i = 0 ; i < 8 ; i ++ ){
            cin >> test[i];
        }
        int firstPart;
        int secPart;
        firstPart = (test[0]-65)*26*26+(test[1]-65)*26+(test[2]-65);
        secPart = (test[4]-48)*1000+(test[5]-48)*100+(test[6]-48)*10+(test[7]-48);
        if (abs(firstPart-secPart) <= 100){
            cout << "nice" << endl;
        }
        else{
            cout << "not nice" << endl;
        }
    }
    return 0;
}
