#include "main.h"
#include<stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: Array of integers.
 *
 * @n: is the number of elements of the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
