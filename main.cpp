#include <iostream>
#include <cctype>
#include <cstdlib>
#include "side.h"
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

