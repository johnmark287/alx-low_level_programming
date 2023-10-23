#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 1;
	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
