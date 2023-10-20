#include "list.h"
/**
* print_list - print size of linked list elements.
* @h: pointer to first node of list.
* Return: Number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", 0, h->len, h->str);
		h = h->next;
		count += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}
