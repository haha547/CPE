/*UVA 1583*/
#include <iostream>
using namespace std;

int fun(int a){
    int sum =0;
    while (a){
        sum += a%10;
        a /= 10;
    }
    return sum;
}


int main(){
    int list[100001];
    for (int j = 0; j < 100001 ; ++j) {
        list[j] = fun(j)+j;
    }
    int testTimes;
    cin >> testTimes;
    while (testTimes--){
        int cases;
        cin >> cases;
        int i = cases/2;
        for (; i < cases; ++i) {
            if (list[i] == cases){
                cout << i << endl;
                break;
            }
        }
        if (i == cases)
            cout << 0 << endl;
    }
}
