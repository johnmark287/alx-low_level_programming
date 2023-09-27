#include "main.h"

/**
 * _sqrt_recursion - calculates  the natural square root of a number.
 * 
 * @n: number.
 * 
 * Return: int.
 * 
*/
int _sqrt_recursion(int n)
{
    if (n == 0)
        return (0);
    return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds squareroot.
 * @n: number.
 * @x: search number.
 * Return: squareroot.
*/
int find_sqrt(int n, int x)
{
    if (x * x == n)
        return (x);
    if (x * x > n)
         return (-1);
    return (find_sqrt(n, x + 1));
}
