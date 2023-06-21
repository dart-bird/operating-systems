CC = gcc
CFLAGS = -Wall -O
CLIBS =
#
OS := $(shell uname -s)
ifeq ($(OS), Linux)
	CLIBS += -lpthread
endif
ifeq ($(OS), Darwin)
#	CLIBS +=
endif
#
all: sudoku.o
	$(CC) -o sudoku sudoku.o $(CLIBS)

sudoku.o: sudoku.c
	$(CC) $(CFLAGS) -c sudoku.c

clean:
	rm -rf *.o
	rm -rf sudoku
	
