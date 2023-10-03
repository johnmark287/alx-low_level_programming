#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * initialized with a specific character.
 * @size: Array size.
 * @c: Character.
 * Return: char.
*/
char *create_array(unsigned int size, char c)
{
char *buffer_array;
unsigned int i;

buffer_array = (char *)malloc(size * (sizeof(char)));
if (buffer_array == NULL || size == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
{
buffer_array[i] = c;
}
}
return (buffer_array);
}
