#include "main.h"
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar(' ');
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			_putchar(' ');
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			_putchar('B');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
			_putchar('0' + i);
	}
	return (0);
}
