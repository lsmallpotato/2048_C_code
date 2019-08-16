test:game_2048.o head.o
	gcc game_2048.o head.o -o test -lcurses
game_2048.o:game_2048.c
	gcc -c -Wall game_2048.c -o game_2048.o -lcurses
head.o:head.c
	gcc -c -Wall head.c -o head.o -lcurses

.PHONY:clean
clean:
	rm *.o test
