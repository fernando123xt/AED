#include "figures.h"
#include "chess.h"
#include "board.h"
void display(){
    char** halfChessB = repeatV( up(lineaN(), lineaB()), 2);
    interpreter(halfChessB);
}
