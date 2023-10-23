#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 1;
	if (h == NULL)
		return (0);
	while (h->next)
	{
		count++;
		h = h->next;
	}
	return (count);
}
