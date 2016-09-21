CC=gcc

loggertest: simpleclogger.h simpleclogger.c test.c
	$(CC) -o loggertest simpleclogger.h simpleclogger.c test.c

clean:
	rm -f *.o loggertest
