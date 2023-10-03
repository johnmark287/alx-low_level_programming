#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: char.
*/
char *argstostr(int ac, char **av)
{
char *s;
int i, j, k, l;
k = 0, l = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
l++;
}
l++;
}
l++;
s = (char *)malloc(l *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
