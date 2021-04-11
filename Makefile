CFLAGS =	-O2 -Wall -c
LDFLAGS =	-O2 -Wall

all:
	gcc $(CFLAGS) animal.c -o animal.o
	gcc $(CFLAGS) dog.c -o dog.o
	gcc $(CFLAGS) cat.c -o cat.o
	gcc $(CFLAGS) main.c -o main.o

	gcc $(LDFLAGS) animal.o dog.o cat.o main.o -o main

clean:
	rm -rf *~ *o main
