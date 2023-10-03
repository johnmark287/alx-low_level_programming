#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: char.
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j, k;
int size1, size2;

i = 0;
while (s1[i] != '\0')
{
i++;
}
size1 = i;
j = 0;
while (s2[j] != '\0')
{
j++;
}
size2 = j;
size2++;
s = (char *)malloc((size1 + size2 + 1) * (sizeof(char)));
if (s == NULL)
return (NULL);
for (k = 0; k < size1; k++)
s[k] = s1[k];
for (k = 0; k < size2; k++)
{
s[size1 + k] = s2[k];
}
s[size1 + size2] = '\0';
return (s);
}
