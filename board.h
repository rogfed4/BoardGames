#include <iostream>
class Board {
protected:
    char a[3][3];  

public:
    Board();
    void printTable();
    bool isFull();
};