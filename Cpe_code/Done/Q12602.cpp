/*UVA 12602*/
#include <iostream>
using namespace std;
int main(){
    int testTimes;
    cin >> testTimes;
    while (testTimes--){
        char c[8];
        cin >> c;
        int f,b;
        f= (c[0]-65)*676 +(c[1]-65)*26 + (c[2]-65);
        b= (c[4]-48)*1000 +(c[5]-48)*100 + (c[6]-48)*10 + (c[7]-48);
        if(abs(f-b) <= 100){
            cout << f << " " << b << " " << endl << "nice" << endl;
        }
        else{
            cout << f << " " << b << " " << endl << "not nice" << endl;
        }
    }
    return 0;
}
