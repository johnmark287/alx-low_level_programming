#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
* first - prints something before main.
*
* Return: void.
*/
void first(void)
{
	printf("You're beat! and yet, youmust allow,\n");
	printf("I bore y house upon my back!\n");
}
