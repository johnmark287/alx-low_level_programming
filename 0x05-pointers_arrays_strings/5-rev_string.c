#include "main.h"

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
	len = 0;

	while (len != '\0')
	{
		len++;
	}
	if (len >= 0)
	{
		for (i = len; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		_putchar('\n');
	}
}
