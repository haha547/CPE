/*UVA 10235*/
#include <iostream>
#include <cmath>
using namespace std;
const int LIMIT = 1000000;

int reverse( int a ){
    int b = 0;
    while( a != 0 ){
        b *= 10;
        b += a%10;
        a /= 10;
    }
    return b;
}

int main(){
    int a,b;
    bool composite[LIMIT+5] = {true, true};
    for( int i = 2; i <= LIMIT ; ++i ){
        if( !composite[i] ){
            for( int j = i+i ; j <= LIMIT ; j += i ){
                composite[j] = true;
            }
        }
    }
    while(cin >> a) {
        if (composite[a]) {
            printf("%d is not prime.\n", a);
            continue;
        }

        int reverseN = reverse(a);
        if (reverseN != a && !composite[reverseN]) {
            printf("%d is emirp.\n", a);
        } else {
            printf("%d is prime.\n", a);
        }
    }
        return 0;
}
