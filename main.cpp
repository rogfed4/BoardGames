#include <iostream>
#include "tictactoe.h"

using namespace std;


int main(){
    TTT game;
    bool flag = 0;
    int row,col; char player = 'x';
    while(!game.isFull()){
        cout<<"game start"<<endl;
        game.printTable();
        cout << "Player " << player << ", enter row and column (0-2): ";
        cin>>row>>col;
        if(game.makeMove(row, col, player)){
            if(game.isComplete()){
                cout<<"winnner is "<<player<<endl;
                flag =1;
                break;
            }
            player = (player == 'x')? 'o':'x';
        }else{
            cout<<"invalid input"<<endl;
        }   
    }
    if(!flag) cout<<"Match Draw"<<endl;
    game.printTable();
    cout<<"End Game"<<endl;
    return 0;
}