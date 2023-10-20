#include "list.h"
/**
* list_len - finds the number of nodes
* in a linked list.
* @h: pointer to the start of linked list.
* Return: Number of elemens in the linked list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
