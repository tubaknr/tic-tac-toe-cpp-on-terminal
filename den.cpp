#include <iostream>
using namespace std;

void printCanvas(char sign, int row, int col){
    char canvas[3][3];

/*     if (sign!= '\0'){
        canvas[row][col] = sign;
    } */

    char signDefault = '_';
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i==(row-1) && j==(col-1)){
                canvas[i][j] = sign;
            }
            else{
                canvas[i][j] = signDefault;
            }
            cout << canvas[i][j];
        }
        cout << endl;
    }
}



int main(){
    char sign;
    int row, col;
    cout << "Enter your sign:" << endl;
    cin >> sign;
    cout << "Enter where? row:" << endl;
    cin >> row;
    cout << "col: " << endl;
    cin >> col;
    printCanvas(sign, row, col);

}



