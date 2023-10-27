#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given point.
 * @n: number to set.
 * @index: index at which to set the bit.
 * Return: 1 if it works, -1 if it fails.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
