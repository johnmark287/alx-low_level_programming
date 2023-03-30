#include "main.h"
#include<string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: string 1.
 *
 * @src: string 2.
 *
 * @n: number of bytes from src.
 *
 * return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
