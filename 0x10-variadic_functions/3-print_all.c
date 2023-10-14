#include "variadic_functions.h"
/**
 * print_all - prints all arguments of different types.
 * @format: format specifier.
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	const char *ptr;

	va_list args;
	va_start(args, format);

	ptr = format;
	while (*ptr)
	{
		if (*ptr == 'c' || *ptr == 'i')
		{
			char c;
			int d;
			
			c = va_arg(args, int);
			printf("%c\n", c);

			d = va_arg(args, int);
			printf("%d\n", d);
		}
		if (*ptr == 's')
		{
			char *s;

			s = va_arg(args, char *);
			if (s)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
