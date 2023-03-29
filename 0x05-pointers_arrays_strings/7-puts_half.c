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
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	j = i / 2;
	if (i % 2 == 1)
		j += 1;

	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
