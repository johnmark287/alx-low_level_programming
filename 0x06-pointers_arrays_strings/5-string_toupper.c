#include "main.h"

/**
 * string_toupper - lowercase to uppercase characters.
 *
 * @s: string.
 *
 * Return: pointer to string.
 */
char *string_toupper(char *s)
{
        int i;
        char a, b;

        i = 0;
        while (*(s + i))
        {
                if (*(s + i) >= 'a' && *(s + i) <= 'z')
                {
			*(s + i) -= ('a' - 'A');
			i++;
		}
	}
	return (s);
}
