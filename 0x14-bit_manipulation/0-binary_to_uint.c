#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointer to a string 0s and 1s chars.
 * Return: the converted number, or 0 if.
 * - there is one or more chars in the string b thet is not 0 or 1.
 * - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i]; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
