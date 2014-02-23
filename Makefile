CFLAGS=-g -std=c99 -O3 -march=native -Wall

main : main.o Makefile
	gcc $(CFLAGS) -o main main.o

%.o : %.c Makefile
	gcc $(CFLAGS) -MD -c $*.c

test : Makefile main
	hardware | ./main

clean :
	rm -f *.d
	rm -f *.o
	rm -f main

-include *.d
