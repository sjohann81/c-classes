CC = gcc
CFLAGS = -O2 -Wall

all: main

main: main.o animal.o cat.o dog.o
	$(CC) $(CFLAGS) -o main main.o animal.o cat.o dog.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

animal.o: animal.c
	$(CC) $(CFLAGS) -c animal.c
	
cat.o: cat.c
	$(CC) $(CFLAGS) -c cat.c
	
dog.o: dog.c
	$(CC) $(CFLAGS) -c dog.c

clean:
	rm -f *.o main
