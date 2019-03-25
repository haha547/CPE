#include <iostream>
using namespace std;
string month[12] = {"January", "February", "March", "April", "May", "June", "July",
"August", "September", "October", "November" , "December"};
int main (){
    int testTimes;
    cin >> testTimes;
    while(testTimes--){
        string a1,b1,c1;
        cin >> a1 >> b1 >> c1;
        cout << a1 <<endl << b1 << endl << c1;
    }
    return 0;
}