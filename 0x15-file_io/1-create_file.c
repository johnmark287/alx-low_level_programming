#include "main.h"
/**
 * _strlen - finds length of a string.
 * @str: pointer to the string.
 * Return: length of the string.
*/
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * create_file
*/
