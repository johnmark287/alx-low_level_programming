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
	int len;
	
	len = 0;

	while (len != '\0')
	{
		len++;
	}
	if (len >= 0)
	{
		len = len - 1;
		while (len >= 0)
		{
			putchar(s[len]);
		}
	}
}
