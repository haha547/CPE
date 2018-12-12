#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned long long int enter;
    while (cin >> enter) {
        if (enter != 0) {
            unsigned long long int sumF = 0 ;
            unsigned long long int sumR = 0 ;
            for (unsigned long long int i = 1 ; i <= enter/2 ; i++ ) {
                sumF += i*(enter/i);
            }
            for (unsigned long long int i = enter/2+1; i <= enter ; i++) {
                sumR += i;
            }
            cout << sumR+sumF-1<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
