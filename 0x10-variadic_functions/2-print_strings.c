#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: pointer to string to separate numbers.
 * @n: number of optional parameter.
 * Return: nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s", va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}
