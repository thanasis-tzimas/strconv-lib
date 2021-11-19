CC := gcc
CFLAGS := -std=c99 -g -Wall -pedantic -lm

test: conv.c
	$(CC) $(CFLAGS) -o test.o conv.c

clean:
	rm -rf *.o
