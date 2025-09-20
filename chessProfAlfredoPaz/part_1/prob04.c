#include "figures.h"
#include "chess.h"
#include "board.h"
void display(){
    char** line = superImpose(Linefigures(),lineaN());
    interpreter(line);
}
