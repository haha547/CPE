#include<iostream>
using namespace std;
bool simpal[10][7]={
                    {1,1,1,0,1,1,1},/*0*/
                    {0,0,1,0,0,1,0},/*1*/
                    {1,0,1,1,1,0,1},/*2*/
                    {1,0,1,1,0,1,1},/*3*/
                    {0,1,1,1,0,1,0},/*4*/
                    {1,1,0,1,0,1,1},/*5*/
                    {1,1,0,1,1,1,1},/*6*/
                    {1,0,1,0,0,1,0},/*7*/
                    {1,1,1,1,1,1,1},/*8*/
                    {1,1,1,1,0,1,1}/*9*/};

void display(int a, char e[]){

}

int main (){
    int howLong;
    char numberEnter[10];
    while(cin >> howLong >> numberEnter && howLong != 0){
        display(howLong,numberEnter);
        cout << endl;
    }
    return 0;
}