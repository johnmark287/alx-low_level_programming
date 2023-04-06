#include "main.h"
#include <math.h>

/**
 * find_sqrt - finds the sqrt by multiplication.
 *
 * @n: parameter 1.
 *
 * @x: parameter 2.
 *
 * Return: int.
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer.
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}
