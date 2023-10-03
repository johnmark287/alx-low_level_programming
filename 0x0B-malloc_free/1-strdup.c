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
int i, j, size;
i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
size = i + 1;
s = (char *)malloc(size * (sizeof(char)));
if (s == NULL)
return (NULL);
for (j = 0; j < size; j++)
{
s[j] = str[j];
}
s[j] = '\0';
return (s);
}
