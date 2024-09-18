#include "tictactoe.h"

bool TTT:: isComplete(){

    if(rowOver() || colOver() || diagOver() || rDiagOver()) return true;
    else return false;
}

bool TTT:: makeMove(int row, int col, char player){
    if(isValid(row,col,player)){
        a[row][col] = player;
        return true;
    }
    return false;
}

bool TTT::isValid(int row, int col, char player){
    if(row<3 && row>=0 && col<3 && col>=0 && a[row][col] == '-') return true;
    else return false;
}

bool TTT::rowOver(){
    for(int i=0;i<3;i++){
        if(a[i][0]== a[i][1] && a[i][1]==a[i][2] && a[i][0]!='-') return true;
    }
    return false;
}

bool TTT::colOver(){
    for(int i=0;i<3;i++){
        if(a[0][i]==a[1][i] && a[1][i]==a[2][i]&& a[0][i]!='-') return true;
    }
    return false;
}

bool TTT::diagOver(){
    if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1]!='-' ) return true;
    else return false;
}

bool TTT::rDiagOver(){
    if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[1][1]!='-') return true;
    else return false;
}   
