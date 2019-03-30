#include <iostream>
using namespace std;
int main(){
    int a,b;
    while(cin >>a >> b){
        if(!a && !b) break;
        int *aCard=new int[a], *bCard=new int[b];
        for(int i = 0; i < a; i++){
            int temp;
            cin >> temp;
            if(i == 0 ){
                aCard[i] = temp;
                continue;
            }
            if(aCard[i-1] == temp){
                i--;
            }
            else{
                aCard[i] = temp;
            }
            if(getchar()!=' ') break;
        } 
        for(int i = 0; i < b; i++){
            int temp;
            cin >> temp;
            if(i == 0 ){
                bCard[i] = temp;
                continue;
            }
            if(bCard[i-1] == temp){
                i--;
            }
            else{
                bCard[i] = temp;
            }
            if(getchar()!=' ') break;
        }






        
        for(int i = 0; i < a; i++){
            cout << aCard[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < b; i++){
            cout << bCard[i] << " ";
        }
        delete[] aCard;
        delete[] bCard;
    }
    return 0;
}