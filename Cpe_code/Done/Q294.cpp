#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

vector<int> prime;
vector<int>::iterator it;

int is_prime(int a ){
    int ans=1,i=2;
    while (a>i){
        if(a%i==0){
            ans = 0;
        }
        i++;
    }
    return ans;
}
void do_prime(){
    for (int i = 2; i <= 31622; ++i) {
        int count=is_prime(i);
        if (count) {
            prime.push_back(i);
        }
    }
}
/*---- 以上質數表 -----*/
int divis(int a){
    int returnNum=1;
    for (it = prime.begin(); it != prime.end() ; ++it) {
        int temp =1;
        while(a%*it == 0){
            temp++;
            a/=*it;
        }
        returnNum *= temp;
    }
    return returnNum;


}
/*---- 以上質因數分解 -----*/

int main(){
    do_prime();

    int testCases;
    cin >> testCases;
    while (testCases--){
        int start,end,ansN=0,ansP=0;
        cin >> start >> end;
        int pos = start;
        vector<int> ansV;
        for (int i = start; i <= end ; ++i) {
            ansV.push_back(divis(i));
        }
        for (it = ansV.begin(); it != ansV.end() ; ++it,++pos) {
            if(*it > ansN) {
                ansN = *it;
                ansP = pos;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",start,end,ansP,ansN);
    }
    return 0;
}
