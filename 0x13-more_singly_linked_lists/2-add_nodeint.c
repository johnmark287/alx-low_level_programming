#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head = NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
