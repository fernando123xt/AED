#include "board.h"
void display(){
    char** board = up (up(PiecesB(),halfChessN()) , PiecesN());
    interpreter(board);
}
