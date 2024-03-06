CC = clang
CFLAGS = -Wall -Wvla -Werror -g

all: bstFunctions

########################################################################

bstFunctions: bstFunctions.o bst.o
	$(CC) $(CFLAGS) -o bstFunctions bstFunctions.o bst.o

bstFunctions.o: bstFunctions.c bst.h

bst.o: bst.c bst.h

########################################################################

clean:
	rm -rf *.o *.dSYM bstFunctions