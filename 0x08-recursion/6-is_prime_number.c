#include "main.h"
/**
 * is_prime_number - finds prime number.
 * @n: number.
 * Return: int.
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime_number(n, 2));
}

/**
 * prime_number - finds modulus to find prime number.
 * @n: first parameter.
 * @x: second parameter.
 * Return: find prime number by guesing
*/

int prime_number(int n, int x)
{
if (n % x == 0)
return (0);
if (x > n / 2)
return (1);
return (prime_number(n, x + 1));
}
