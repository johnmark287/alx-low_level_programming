#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list.
 * @list: the old list to append.
 * @size: size of the new list(always one more than the new list).
 * @new: new node to add to the list.
 * Return: pointer to the new list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
