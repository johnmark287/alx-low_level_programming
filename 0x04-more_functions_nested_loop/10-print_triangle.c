#include "main.h"

/**
 * size - size of triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= (size - 1); j--)
		{
			_putchar(' ');
		}
		for (k = j; k < 0; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
