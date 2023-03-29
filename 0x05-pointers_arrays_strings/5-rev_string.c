#include "main.h"
#include<stdio.h>

/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse.
 *
 * Return: none.
 */
void rev_string(char *s)
{
	int len, i;
	char buffer[500];

	len = 0;
	while (s[len] != '\0')
	{
		*(buffer + len) = s[len];
		len++;
	}

	len = len - 1;
	i = 0;
	while (len >= 0)
	{
		s[len] = *(buffer + i);
		len--;
		i++;
	}
}
