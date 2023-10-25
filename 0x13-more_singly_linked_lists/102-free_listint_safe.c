#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append.
 * @size: size of the new list(always one more than the old list)
 * @new: node to add to the new list.
 * Return: pointer to the new list.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
