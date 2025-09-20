#include "figures.h"
#include "chess.h"
#include "board.h"
void display(){
    char** line = superImpose(LinefiguresN(),lineaN());
    interpreter(line);
}
