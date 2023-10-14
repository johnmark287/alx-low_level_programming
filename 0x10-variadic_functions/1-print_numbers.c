#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, folllowed b a new line.
 * @separator: pointer to string to separate numbers.
 * @n: number of optional parameters.
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i > 0 && i < n)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
}
