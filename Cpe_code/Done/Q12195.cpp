#include <iostream>
using namespace std;
int duration[99];
char measure[202];
int main(){
    duration['W'] = 64;
	duration['H'] = 32;
	duration['Q'] = 16;
	duration['E'] = 8;
	duration['S'] = 4;
	duration['T'] = 2;
	duration['X'] = 1;
    while(cin >> measure && measure[0] != '*'){
        int sum = 0, ans = 0;
		for (int i = 0; measure[i]; ++ i) {
			if (measure[i] == '/') {
				if (sum == 64) {
					ans ++;
				}
				sum = 0;
			}else {
				sum += duration[measure[i]];
			}
		}
        cout << ans <<endl;
    }
    return 0;
}