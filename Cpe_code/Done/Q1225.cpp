#include<iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    
    for(int i = 0 ; i < testcase ; i++)
    {
        int num;
        int count[10] = {0};// 用來計數0-9共有幾個
        cin >> num;
        
        // 計數0-9的數字
        for(int j = 1 ; j <= num ; j++){
            string temp = to_string(j);
            for(int k = 0 ; k < temp.length() ; k++)
                count[temp[k] - '0']++;
        }
        
        //output
        for(int j = 0 ; j < 10 ; j++){
            if(j != 0)
                cout << " ";
            cout << count[j];
        }
        cout << endl;
    }
    return 0;
}