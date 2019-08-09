#include <cstdio>
#include <stdio.h>
#include <string.h>
int num[11];
char a1[10],a2[10];
int main(){
    int enter_n,ans;
    while (scanf("%d", &enter_n)){
        if (enter_n == 0) break;
        memset(num, 0, sizeof(num));
        scanf("%s%s", &a1,&a2);
        ans =0;
        while (a1[0] != 'r'){
            if(ans == 0){
                if(a2[0] == 'h' ){
                    for (int i = enter_n; i <= 10 ; ++i) {
                        if(num[i] == -1)
                            ans = -1;
                        else
                            num[i] = 1;
                    }
                }
                else{
                    for (int i = 1 ; i <= enter_n ; ++i) {
                        if(num[i] == 1)
                            ans = -1;
                        else
                            num[i] = -1;
                    }
                }
            }
            scanf("%d%s%s", &enter_n,&a1,&a2);
        }
        if(num[enter_n] == 0 && ans == 0)
            printf("Stan may be honest\n");
        else
            printf("Stan is dishonest\n") ;
    }
    return 0;
}