
CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

.PHONY: all
all: palindrome twoSum

palindrome: palindrome.c
twoSum: twoSum.c

.PHONY: clean
clean:
	rm -rf palindrome twoSum *.dSYM
