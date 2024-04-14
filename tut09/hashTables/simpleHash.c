#include <stdio.h>

int hash(char *key, int N);

int main(void) {

    int size = 10;
    // printf("hash(\"hi\") = %d\n", hash("hi", size));
    printf("hash(\"cat\") = %d\n", hash("cat", size));
    printf("hash(\"tac\") = %d\n", hash("tac", size));
    printf("hash(\"act\") = %d\n", hash("act", size));
    // printf("hash(\"hello\") = %d\n", hash("hello", size));
    // printf("hash(\"zID\") = %d\n", hash("zID", size));

    return 0;
}

int hash(char *key, int N) {
	int h = 0;
    int position = 0;
	char *c;
	for (c = key; *c != '\0'; c++, position++) {
		h = h + (*c * position);
	}
	return h % N;
}
