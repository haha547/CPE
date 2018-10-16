#include <iostream>

int x_move(int,char);
int y_move(int,char);
char rotateFace(char,char);

using namespace std;
int main(int argc, const char * argv[]) {

    int X_cor,Y_cor;
    char faceNav;
    char commandChar[100];
//    ------------------
    cin >> X_cor;
    cin >> Y_cor;
    cin >> faceNav;
    cin.getline(commandChar,sizeof(commandChar));
    cout << "\n";
//-----------------------------
    for (int i = 0 ; i < 100 ; i++) {
        if (commandChar[i] != '\0') {
            if (commandChar[i] == 'F'){
                X_cor = x_move(X_cor, faceNav);
                Y_cor = y_move(Y_cor, faceNav);
            }
            else{
                faceNav = rotateFace(faceNav, commandChar[i]);
            }
        }
    }
    cout << X_cor << Y_cor << faceNav << endl;
    return 0;
}

int x_move(int X_cor,char faceNav){
    if (faceNav == 'E' ){
        X_cor++;
        return X_cor;
    }
    else if (faceNav == 'W'){
        X_cor--;
        return X_cor;
    }
    else{
        return X_cor;
    }
}

int y_move(int Y_cor,char faceNav){
    if (faceNav == 'N'){
        Y_cor++;
        return Y_cor;
    }
    else if (faceNav == 'S'){
        Y_cor--;
        return Y_cor;
    }
    else{
        return Y_cor;
    }
}

char rotateFace(char faceNav, char commandCharInput){
    if (faceNav == 'N'){
        if (commandCharInput == 'R') {
            faceNav = 'E';
        }
        else{
            faceNav = 'W';
        }
    }
    else if (faceNav == 'E') {
        if (commandCharInput == 'R') {
            faceNav = 'S';
        }
        else{
            faceNav = 'N';
        }
    }
    else if (faceNav == 'S'){
        if (commandCharInput == 'R') {
            faceNav = 'W';
        }
        else{
            faceNav = 'E';
        }
    }
    else{
        if (commandCharInput == 'R') {
            faceNav = 'N';
        }
        else{
            faceNav = 'S';
        }
    }
    return faceNav;
}
