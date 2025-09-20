#include "figures.h"
#include "chess.h"
char** lineaB(){
    return repeatH(join(whiteSquare, reverse(whiteSquare)), 4);
}
char** lineaN(){
    return repeatH(join(reverse(whiteSquare),whiteSquare), 4);
}
char** Linefigures(){
    char** figures[] = {knight,bishop,queen,king,bishop,knight,rook};
    char** figure=rook;
    for(int i=0;i<7;i++){
        figure = join(figure,*(figures+i));
    }
    return figure;
}
char** LinefiguresN(){
    return reverse(Linefigures());
}
char** LinePawn(){
    char** Linepawn = pawn;
    for(int i=0;i<7;i++){
        Linepawn = join(Linepawn,pawn);
    }
    return Linepawn;
}
char** LinePawnN(){
    return reverse(LinePawn());
}
char** PiecesB(){
    return superImpose( up(Linefigures(),LinePawn()) , up(lineaN(),lineaB()) );
}
char** PiecesN(){
    return superImpose( up(LinePawnN(),LinefiguresN()) , up(lineaN(),lineaB()) );
}
char** halfChessN(){
    return repeatV( up(lineaN(), lineaB()), 2);
}
char** board(){
    return  up (up(PiecesB(),halfChessN()) , PiecesN());
}