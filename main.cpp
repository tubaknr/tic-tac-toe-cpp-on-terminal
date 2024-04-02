#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

/*
olasılıklar:
1 2 3 
4 5 6
7 8 9

1-5-9;11 22 33
3-5-7;13 22 31
2-5-8;12 22 32

4-5-6;21 22 23
1-2-3;11 12 13

1-4-7;11 21 31
7-8-9;31 32 33

3-6-9;13 23 33
*/


char canvas[3][3] = {{'_','_','_'}, {'_','_','_'}, {'_','_','_'}};


void printCanvas(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << canvas[i][j];
        }
        cout << endl;
    }
}



void answer(int &row, int &col){
    cout << "\n Row ?" << endl;
    cin >> row;
    cout << "\n Col ?" << endl;
    cin >> col;
}


void checkCanvas(){ 
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (tolower(canvas[i][j])=='x' ||  tolower(canvas[i][j])=='o'){ //11-22-33

                if ((canvas[i][j] == canvas[i+1][j+1]) && (canvas[i][j] == canvas[i+2][j+2])){
                    //cout << "1deyiz" << endl;
                    cout << "you won!" << endl;
                    exit(0);
                }    
                else if ((canvas[i][j] == canvas[i+1][j-1]) && (canvas[i][j] == canvas[i+2][j-2])){ //13-22-31
                    //cout << "2deyiz" << endl;
                    cout << "you won!" << endl;
                    exit(0);
                }  

                else if ((canvas[i][j] == canvas[i+1][j]) && (canvas[i][j] == canvas[i+2][j])){ //12-22-32
                    //cout << "3deyiz" << endl;
                    cout << "you won!" << endl;
                    exit(0);
                }
            
                else if ((canvas[i][j] == canvas[i][j+1]) && (canvas[i][j] == canvas[i][j+2])){ //21-22-23
                    //cout << "4deyiz" << endl;
                    cout << "you won!" << endl;
                    exit(0);
                }
        }
    }
}
}
int main(){
    char ans, sign = 'X';
    int row, col, userNum, currentPlayer, NumOfTurns = 1;
    bool who;

    printCanvas();

    while(true){    
        answer(row, col);
        canvas[row-1][col-1] = sign;

        cout << "You selected:" << row << col << endl;
        
        NumOfTurns++;

        if (NumOfTurns%2==0){
            sign = 'O';
        }
        else{
            sign = 'X';
        }

        printCanvas();

        if (NumOfTurns >= 3){
            checkCanvas();
        }
    
    }
}

