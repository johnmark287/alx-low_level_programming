#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, chr;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
