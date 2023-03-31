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
        a = 'a';
        b = 'A';
        while (*(s + i) != '\0')
        {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                        while (*(s + i) != '\0')
                        {
                                while (s[i] == a)
                                {
                                        s[i] = b;
                                        a++;
                                        b++;
                                }
                        }
                }
        }
        return (s);
}
