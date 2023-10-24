#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
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
			return (-1);
		currrent = currrent->next;
	}
	next = currrent->next;
	currrent->next = next->next;
	free(next);
	return (1);
}
