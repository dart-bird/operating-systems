CC = gcc
CFLAGS = -Wall -O
CLIBS =
#
OS := $(shell uname -s)
ifeq ($(OS), Linux)
#	CLIBS += -lbsd
endif
ifeq ($(OS), Darwin)
#	CLIBS +=
endif
#
all: tsh.o
	$(CC) -o tsh tsh.o $(CLIBS)

tsh.o: tsh.c
	$(CC) $(CFLAGS) -c tsh.c

clean:
	rm -rf *.o
	rm -rf tsh
	
