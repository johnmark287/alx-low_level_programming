#include "main.h"
#include<math.h>
/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: string to print half;
 *
 * Return: No return.
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if ((len / 2) == 0)
	{
		int n = floor(len / 2);
		int L = n - 1;

		for (i = L; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		int n = floor(len / 2);

		for (i = n; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

