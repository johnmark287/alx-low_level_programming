#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: 0 on success, integer error on failure.
*/
int main(void)
{
int i;
char *str;

str = __FILE__;
i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
