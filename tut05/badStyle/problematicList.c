#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

// frees a list, takes in the head of the list
static void freeList(struct node *head) {
	if (head == NULL) {
		return;
	}
	// Frees the list by iterating through the list, using a temporary element
	// and freeing the elements by using free
	struct node *temp = head;
	while (head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}
}

static void printList(struct node *node) {
	while (node->next != NULL) {
		printf("%d -> ", node->data);
		node = node->next;
	}
	printf("%d\n", node->data);
	return;
}

static struct node *appendNode(struct node *a, int data) {
	// create a new node
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;

	// insert new node into list
	if (a == NULL) {
		a = newNode;
	} else {
		struct node *lastnode = a;
		while (lastnode->next != NULL) {
			lastnode = lastnode->next;
		}
		lastnode->next = newNode;
	}
	return a;
}

int main() {
	struct node *head = NULL;
	head = appendNode(head, 1);
	head = appendNode(head, 2);
	head = appendNode(head, 3);
	head = appendNode(head, 4);
	printList(head);
	freeList(head);
	return 0;
}
