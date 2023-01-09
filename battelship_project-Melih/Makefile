all: main.o rules.o physiks.o graphics.o
	gcc main.o rules.o physiks.o graphics.o pdcurses.a -o BattelShip

main.o: #main.c
	gcc -c -I. main.c 

rules.o: #rules.c
	gcc -c -I. rules.c 

physiks.o: #physiks.c
	gcc -c -I. physiks.c

graphics.o: #graphics.c
	gcc -c -I. graphics.c 




clean:
#	del BattelShip.exe
#	del *.o
	del *.o
	del BattelShip.exe
	