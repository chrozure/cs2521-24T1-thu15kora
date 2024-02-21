
CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

.PHONY: all
all: listLength listCountOdds listIsSorted listDelete

listLength: listLength.c list.c
listCountOdds: listCountOdds.c list.c
listIsSorted: listIsSorted.c list.c
listDelete: listDelete.c list.c

.PHONY: clean
clean:
	rm -rf listLength listCountOdds listIsSorted listDelete *.dSYM
