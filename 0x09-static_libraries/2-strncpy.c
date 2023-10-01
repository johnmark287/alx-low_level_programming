#include "main.h"
#include<string.h>
/**
 * _strncpy - copys n bytes of string 1 to tring 2.
 *
 * @dest: string 1.
 *
 * @src: string 2.
 *
 * @n: number of bytes from src.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
