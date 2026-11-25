CC = clang
CFLAGS = -Wall -Wpedantic -Werror -Wextra

all: blackwalli-test caat

blackwalli-test: blackwalli-test.o blackwalli.o
	$(CC) blackwalli.o blackwalli-test.o -lm -o blackwalli-test

blackwalli-test.o: blackwalli-test.c blackwalli.h
	$(CC) $(CFLAGS) -c blackwalli-test.c

blackwalli.o: blackwalli.c blackwalli.h
	$(CC) $(CFLAGS) -c blackwalli.c

caat: caat.c
	$(CC) $(CFLAGS) caat.c -o caat

clean:
	rm -f blackwalli-test caat *.o

format:
	clang-format -i *.[ch]
