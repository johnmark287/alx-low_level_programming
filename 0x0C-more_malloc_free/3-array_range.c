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
int i;

ptr = malloc(sizeof(int) * ((max - min) + 1));
if (min > max || ptr == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
ptr[min] = min;
min++;
}
return (ptr);
}
