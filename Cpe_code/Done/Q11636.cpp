#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int enter,times = 1;
    while (cin >> enter && enter != -1){
        for (int i = 0 ; i < 20 ; i++){
            if (enter > pow(2,i) && enter <= pow(2,i+1)){
                cout << "Case " << times << ": " << i+1 << endl;
            }
            else if (enter == 1){
                cout << "Case " << times << ": " << "0" << endl;
                break;
            }
        }
        times++;
    }
    return 0;
}