CC=gcc
CFLAGS=-I.

all: main.o file_2.o
	$(CC) main.o file_2.o -o storage_class 

main.o: main.c file_2.h
	$(CC) $(CFLAGS) -c main.c 

hellofun.o: file_2.c file_2.h
	$(CC) $(CFLAGS) -c file_2.c

clean:
	rm *.o
	rm storage_class
