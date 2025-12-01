CC = clang
CFLAGS = -Wall -Wextra -g

all: test

test: test.o libfasm.o WRAPPER.o
	$(CC) -o test test.o libfasm.o WRAPPER.o

test.o: test.c fasm.h
	$(CC) $(CFLAGS) -c test.c

libfasm.o: libfasm.c fasm.h
	$(CC) $(CFLAGS) -c libfasm.c

WRAPPER.o: WRAPPER.ASM
	fasm WRAPPER.ASM WRAPPER.o

clean:
	rm -f *.o test

run: test
	./test
