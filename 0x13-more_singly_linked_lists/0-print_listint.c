#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
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
