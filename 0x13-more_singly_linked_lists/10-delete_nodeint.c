#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currrent, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	currrent = *head;
	for (i = 0; i < index; i++)
	{
		if (currrent->next == NULL)
			return(-1);
		currrent = currrent->next;
	}
	next = currrent->next;
	currrent->next =next->next;
	free(next);
	return (1);
}
