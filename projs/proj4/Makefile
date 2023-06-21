CC=gcc
CFLAGS=-Wall -Wextra -std=c99 -pthread
LDFLAGS=-pthread

all: reader_prefer_cond writer_prefer_cond writer_prefer_mutex fair_reader_writer_mutex

reader_prefer_cond: reader_prefer_cond.o
	$(CC) $(LDFLAGS) $< -o $@

reader_prefer_cond.o: reader_prefer_cond.c
	$(CC) $(CFLAGS) -c $< -o $@

writer_prefer_cond: writer_prefer_cond.o
	$(CC) $(LDFLAGS) $< -o $@

writer_prefer_cond.o: writer_prefer_cond.c
	$(CC) $(CFLAGS) -c $< -o $@

writer_prefer_mutex: writer_prefer_mutex.o
	$(CC) $(LDFLAGS) $< -o $@

writer_prefer_mutex.o: writer_prefer_mutex.c
	$(CC) $(CFLAGS) -c $< -o $@

fair_reader_writer_mutex: fair_reader_writer_mutex.o
	$(CC) $(LDFLAGS) $< -o $@

fair_reader_writer_mutex.o: fair_reader_writer_mutex.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f reader_prefer_cond *.o && rm -f writer_prefer_cond *.o && rm -f writer_prefer_mutex *.o