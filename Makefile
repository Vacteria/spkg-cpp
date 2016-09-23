#!/usr/bin/make -f

CC = g++
LDFLAGS = -I./libspkg

spkg : spkg.o
	$(CC) $(LDFLAGS) -o spkg spkg.o

clean :
	rm *.o spkg
