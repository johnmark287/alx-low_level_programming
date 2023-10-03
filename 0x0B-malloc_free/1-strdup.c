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
int i, size;
if (str ==NULL)
return (NULL);
for (i = 0; i < str[size]; size++)
;
size++;
s = (char *)malloc(size * (sizeof(char)));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = str[i];
}
s[i] = '\0';
return (s);
}
