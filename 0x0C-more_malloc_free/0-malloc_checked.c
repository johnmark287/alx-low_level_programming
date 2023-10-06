#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate.
 * Return: pointer to allocated memory if successful, or exit(98) on failure.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
