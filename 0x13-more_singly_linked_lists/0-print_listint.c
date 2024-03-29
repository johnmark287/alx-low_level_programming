#include "lists.h"
/**
 * print_listint - prints list
 * @h: pointer to 1st element.
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
