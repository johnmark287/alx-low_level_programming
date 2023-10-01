#include "main.h"
#include<string.h>
/**
 * _strcat - concatenates two strings.
 *
 * @dest: string 1.
 *
 * @src: string 2.
 *
 * Return: void.
 */
char *_strcat(char *dest, char *src)
{
	char *x;

	x = strcat(dest, src);
	return (x);
}
