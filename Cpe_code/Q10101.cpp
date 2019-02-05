#include <iostream>
using namespace std;
int main (){
    long int a;
    long int kuti = 10000000;
    int lakh = 100000 , hajar = 1000 , shata = 100 ;
    while(cin >> a ){
        int k_count = 0, l_count = 0, h_count = 0, s_count = 0;
        int countNum = 1;
        while(a > kuti){
            k_count++;
            a -= kuti;
        }
        while(a > lakh){
            l_count++;
            a -= lakh;
        }
        while(a > hajar){
            h_count++;
            a -= hajar;
        }
        while(a > shata){
            s_count++;
            a -= shata;
        }
        cout << countNum << ". ";

        if (k_count > 0){
            cout << k_count << "kuti ";
        }
        if (l_count > 0){
            cout << l_count << "lakh ";
        }
        if (h_count > 0){
            cout << h_count << "hajar ";
        }
        if (s_count > 0){
            cout << s_count << "shata ";
        }
        
        countNum ++;
    }
    return 0;
}