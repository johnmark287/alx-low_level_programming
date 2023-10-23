#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int value;
	Node *next;
};

typedef struct node Node;

int main(void)
{
	Node *node_ptr = NULL;
	Node list = {1, NULL};

	node_ptr = list;
	node_ptr->value = 0;
	node_ptr->next = NULL;

	Node *new = malloc(sizeof(Node));
	new->value = 5;
	node_ptr->next = new;
	new->next = NULL;

	list.

	return (0);
}
