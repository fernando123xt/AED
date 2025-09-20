#include "figures.h"
#include "chess.h"

void display(){
    char** cuadradoB = whiteSquare;
    char** cuadradoN = reverse(cuadradoB);
    char** lineaT = repeatH(join(cuadradoB, cuadradoN), 4);
    interpreter(reverse(lineaT));
}
