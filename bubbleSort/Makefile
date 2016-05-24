.PHONY: clean
CFLAGS= -ansi -pedantic -O0 -Wall

all: run

run: main.o sort.o
	gcc -g -o run $(CFLAGS) main.o sort.o

main.o: main.c
	gcc -c -g -o main.o $(CFLAGS) main.c

sort.o: sort.S
	as --64 -o sort.o sort.S

clean:
	rm -f *.o run
