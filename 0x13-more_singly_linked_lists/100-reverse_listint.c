#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list.
 * @head: double pointer to the start of the list.
 * Return: a pointer to the 1st node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next, *current;

	current = *head;
	next = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous = NULL;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
