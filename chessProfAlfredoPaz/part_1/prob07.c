#include "board.h"
char** squareKnight(  ){
    char** caballo = superImpose(knight,whiteSquare);
    char** tablero = up( join(reverse(whiteSquare),caballo) , join(whiteSquare,reverse(whiteSquare)) );

    char** caballo2 = rotateL(superImpose(knight,reverse(whiteSquare)));
    char** tablero2 = up( join(caballo2,whiteSquare) , join(whiteSquare,reverse(whiteSquare)) );
    
    char** caballo3 = rotateL(rotateL(superImpose(knight,whiteSquare)));
    char** tablero3 = up( join(reverse(whiteSquare), whiteSquare), join(caballo3,reverse(whiteSquare)) );
    
    char** caballo4 = rotateL(rotateL(rotateL( superImpose(knight,reverse(whiteSquare)) )));
    char** tablero4 = up( join(reverse(whiteSquare), whiteSquare) , join(whiteSquare,caballo4) );
    return tablero4;
     
}   
void display(){
  interpreter( squareKnight() );
}   
