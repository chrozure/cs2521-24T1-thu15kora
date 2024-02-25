
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void testListDelete(int values[], int size, int valueToDelete);
struct node *listDelete(struct node *list, int value);

int main(int argc, char *argv[]) {
    testListDelete((int[]){}, 0, 1);
    testListDelete((int[]){1}, 1, 1);
    testListDelete((int[]){1}, 1, 2);
    testListDelete((int[]){1, 2}, 2, 1);
    testListDelete((int[]){1, 2}, 2, 2);
    testListDelete((int[]){1, 2}, 2, 3);
    testListDelete((int[]){1, 2, 3}, 3, 1);
    testListDelete((int[]){1, 2, 3}, 3, 2);
    testListDelete((int[]){1, 2, 3}, 3, 3);
    testListDelete((int[]){1, 2, 3}, 3, 4);
    testListDelete((int[]){1, 2, 3, 2}, 4, 2);
}

void testListDelete(int values[], int size, int valueToDelete) {
    struct node *list = arrayToList(values, size);

    printf("List: ");
    listPrint(list);
    printf("\n");

    list = listDelete(list, valueToDelete);
    printf("List after deleting %d: ", valueToDelete);
    listPrint(list);
    printf("\n\n");

    listFree(list);
}

struct node *listDelete(struct node *list, int value) {
    // Base case - list is empty
    if (list == NULL) {
        return NULL;
    }

    // Base case - value matches with current node
    if (list->value == value) {
        struct node *restOfList = l->next;
        free(list);
        // Since we are only deleting the first node, we don't recursively call
        return restOfList;
    }

    // Recursive case - value does not match with current node
    struct node *headOfRestOfList = listDelete(list->next, value);
    list->next = headOfRestOfList;
    return list;
}
