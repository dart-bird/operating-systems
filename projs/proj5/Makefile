CC = gcc -g
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
all: client.o pthread_pool.o
	$(CC) -o client client.o pthread_pool.o $(CLIBS)

client.o: client.c pthread_pool.h
	$(CC) $(CFLAGS) -c client.c

pthread_pool.o: pthread_pool.c pthread_pool.h
	$(CC) $(CFLAGS) -c pthread_pool.c

clean:
	rm -rf *.o
	rm -rf client
