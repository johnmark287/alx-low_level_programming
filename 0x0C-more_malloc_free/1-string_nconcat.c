#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: bytes of s2 to print.
 * Return: char.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *ptr;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i] != '\0'; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[i] != '\0'; j++)
;
}

ptr = malloc((i + j + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (k = 0; k < i; k++)
ptr[k] = s1[k];
for (k = 0; k < n; k++)
ptr[k + 1] = s2[k];
ptr[i + j] = '\0';
return (ptr);
}
