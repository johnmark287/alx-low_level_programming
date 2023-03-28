#include "main.h"
#include<string.h>
#include<stdio.h>

/**
 * print_rev - check the code
 *
 * @s: string to reverse.
 *
 * Return: No return.
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;
	}
	putchar('\n');
}
