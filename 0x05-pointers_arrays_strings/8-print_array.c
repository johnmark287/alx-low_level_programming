#include "main.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 * @a: array to print.
 *
 * @n: number of elements in array.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
