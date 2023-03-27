#include "main.h"
#include<stdio.h>
/**
 * more_numbers -  prints 10 times the numbers, from 0-14.
 *
 * Return: No return value.
 */
void more_numbers(void)
{
	char a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 9)
			{
				c = b;
			}
			else
			{
				d = b / 10;
				c = b % 10;
				_putchar('0' + d);
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
