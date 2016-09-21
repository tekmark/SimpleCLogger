CC=gcc
CFLAGS=-Wall
loggertest: simpleclogger.h simpleclogger.c test.c
	$(CC) $(CFLAGS) -o loggertest simpleclogger.h simpleclogger.c test.c

clean:
	rm -f *.o loggertest
