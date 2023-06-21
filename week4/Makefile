CC=gcc
CFLAGS=-o
TARGETS=ordinary_pipe line_a wait_child line_a_2 two_pipe
all: $(TARGETS)

.PHONY: all
%:
	$(CC) -o $@ $@.c 
       
clean:
	rm $(TARGETS)
