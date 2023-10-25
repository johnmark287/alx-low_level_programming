#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next = NULL;

	while (head)
	{
		next = head;
		head = head->next;
		free(next);
	}
}
