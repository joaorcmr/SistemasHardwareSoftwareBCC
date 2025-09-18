CC=gcc
CFLAGS=-Og -Wall -std=c99

OBJS=main.o ex1.o ex2.o ex3.o ex4.o vezes2_ref.o

all: atv04

atv04: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS) atv04

.PHONY: all clean
