#include "main.h"
#include "_putchar.c"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: The character to check.
 *
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
