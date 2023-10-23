#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 1;
	if (h == NULL)
		return (0);
	while (h->next)
	{

		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (nodes);
}
