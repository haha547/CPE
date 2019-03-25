#include <iostream>
using namespace std;
int main(){
    int start,num1,num2,num3;
    while (cin >> start >> num1 >> num2 >> num3){
        if (start ==0 && num1 == 0 && num2 == 0 && num3 == 0){
            break;
        }
        else {
            int span = 120+(40+start-num1)%40+(40+num2-num1)%40+(40+num2-num3)%40;
            cout << span * 9 << endl;
        }
    }
    return 0;
}