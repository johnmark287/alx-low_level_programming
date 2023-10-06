#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: smallest integer.
 * @max: largest integer.
 * Return: pointer to the allocated memory for array.
*/
int *array_range(int min, int max)
{
int *ptr;
int i, n;

n = (max - min) + 1;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * n);
if (ptr == NULL)
return (NULL);
for (i = 0; i <= n; i++)
{
ptr[i] = min;
}
return (ptr);
}
