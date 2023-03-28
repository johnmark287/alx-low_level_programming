#include "main.h"
/**
 */
void print_number(int n)
{
	;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar('Fizz');
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			_putchar('Fizz Buzz');
		}
		else
			_putchar('0' + i);
	}
	return (0);
}
