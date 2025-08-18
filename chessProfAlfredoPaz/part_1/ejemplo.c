#include "chess.h"
#include "figures.h"
#include <stdio.h>
void practice(){

  char letter = 'a';
  char* ptrLetter = &letter;
  //printf("%s\n", *ptrLetter); // error s => solo si apuntas a un string(array) válido terminado en \0

  char word[] = "hello world"; // internamente se guarda \0
  char word2[] = {'a', 'b', 'c', 'd', 'n', 'i', ' ', 'a', 'h', 'o', 'r','a'}; // sino e coloca \0 (comportamiento indefinido)
  // Como no encuentra '\0' sigue leyendo lo que haya en memoria después del array.
  //printf("%s\n", word2);

  char matrix[][20] = {"escuela",  //char arr[M][N] → bloque rectangular fijo, memoria contigua.
                    "profesional",  //Ventaja: fácil de recorrer con índices [i][j].
                    "computacion"}; // Desventaja: ocupa más memoria si las cadenas son de longitudes muy diferentes.

  char* matriz[] = {"escuela",     //char* arr[] → array de punteros, cada uno puede apuntar a un string de distinto tamaño.
                    "profesional",//➡️ Ventaja: más eficiente en memoria.
                    "computacion"};//Desventaja: no tienes un bloque rectangular; no puedes tratarlo como una matriz matrix[i][j] 
                    //sino como matrix[i] (un puntero a char) y luego acceder con matrix[i][j].
  /*for(int i=0;i<3;i++)
    printf("%s\n",*(matrix+i));*/
}

void display(){
  char** cuadradoB = whiteSquare;
  char** cuadradoN = reverse(cuadradoB);
  char** lineaT = repeatH(join(cuadradoB, cuadradoN), 4);
  char** lineaInversa = repeatH(join(cuadradoN, cuadradoB), 4);
  practice();
  //interpreter(lineaInversa);
  //interpreter(queen);
}

