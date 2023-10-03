#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter.
 * Return: char.
*/
char *_strdup(char *str)
{
char *s;
int i, len;
if (str == NULL)
return (NULL);
for (i = 0; i < str[len]; len++)
;
len++;
s = (char *)malloc(len *(sizeof(char)));
if (s == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
return (s);
}
