#include "main.h"
#include<string.h>

/**
 * _strcmp - copys n bytes of string 1 to tring 2.
 *
 * @s1: string 1.
 *
 * @s2: string 2.
 *
 * Return: -15, 15, or 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, n, len1, len2;

	i = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 >= len2)
		n = len2;
	else
		n = len1;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-15);
	else
		return (15);
}
