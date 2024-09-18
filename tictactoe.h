#include "board.h"

class TTT : public Board {
public:
    bool isComplete();
    bool makeMove(int row, int col, char player);

private:
    bool isValid(int row, int col, char player);
    bool rowOver();
    bool colOver();
    bool diagOver();
    bool rDiagOver();
};