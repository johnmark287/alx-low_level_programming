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
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i > 0 && i < n)
		{
			printf("%s", separator);
		}
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
