CC=gcc
CFLAGS=-I.

all: hellomain.o hellofun.o
	$(CC) hellomain.o hellofun.o -o hello 

hellomain.o: hellomain.c hellofun.h
	$(CC) $(CFLAGS) -c hellomain.c 

hellofun.o: hellofun.c hellofun.h
	$(CC) $(CFLAGS) -c hellofun.c

clean:
	rm *.o
	rm hello