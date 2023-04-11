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
	unsigned int len, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = 0;
	while(str[len])
		len++;
	len++;
	ptr = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}
