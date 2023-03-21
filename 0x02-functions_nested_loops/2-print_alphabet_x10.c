#include"main.h"
#include<stdio.h>
/**
 * print_alphabet_x10-Entry point
 *
 * Description: prints 10 times the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
