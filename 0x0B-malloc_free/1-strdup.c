#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string.
 *
 * @str: string parameter.
 *
 * Return: string.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < (strlen(str)); i++)
		ptr[i] = str[i];

	return (ptr);
}
