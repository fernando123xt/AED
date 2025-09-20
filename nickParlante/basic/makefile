exe: list.o main.o 
	gcc list.c main.c -o exe
list.o: list.c list.h 
	gcc -c list.c 
main.o: main.c list.h 
	gcc -c main.c 

