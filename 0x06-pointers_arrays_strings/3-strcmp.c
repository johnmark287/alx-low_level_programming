#include "main.h"
#include<string.h>
/**
 * _strncpy - copys n bytes of string 1 to tring 2.
 *
 * @dest: string 1.
 *
 * @src: string 2.
 *
 * @n: number of bytes from src.
 *
 * Return: pointer to dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i, n, len1, len2;

	i = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 >= len2)
		n = len1;
	else
		n = len2;
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
