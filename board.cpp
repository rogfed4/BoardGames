#include <iostream>
#include "board.h"

using namespace std;


Board::Board(){
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            a[i][j] = '-';
        }
    }
}

void Board::printTable(){
    cout << "-----" << endl;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<a[i][j];
            if (j < 2) cout << "|";
        }
        cout<<endl;
        if (i < 2) cout << "-----" << endl;
    }
}

bool Board::isFull(){
    int count =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!= '-') count++;
        }
    }
    return (count>=9);

}
