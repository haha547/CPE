#include <iostream>
using namespace std;
int main(){
    string enter;
    while(getline(cin,enter)){
        int max=0,input_case[52]={0};

        for (int i = 0; i < enter.length(); ++i) {
            if(enter[i] >= 'A' && enter[i] <= 'Z'){
                input_case[(int)enter[i]-65]++;
            }
            if(enter[i] >= 'a' && enter[i] <= 'z'){
                input_case[(int)enter[i]-71]++;
            }
        }
        for (int i = 0; i < 52; ++i) {
            if(input_case[i] > max) max=input_case[i];
        }
        for (int i = 0; i < 26; ++i) {
            if(input_case[i] == max){
                cout << char(i+65);
            }
        }
        for (int i = 26; i < 52; ++i) {
            if(input_case[i] == max){
                cout << char(i+71);
            }
        }
        cout << " " << max <<endl;
    }

    return 0;
}