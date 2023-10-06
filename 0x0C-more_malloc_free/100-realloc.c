#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: size of the, in bytes, of the allocated space for ptr.
 * @new_size: size of the, in bytes, of the new memory block.
 * Return: void pointer to the newly allocated memory.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;
    unsigned int i, max = new_size;
    char *old_ptr = ptr;

    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        return (new_ptr);
    }
    else if (new_size == old_size)
        return (ptr);
    else if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);
    if (new_size > old_size)
        max = old_size;
    for (i = 0; i < max; i++)
        new_ptr[i] = old_ptr[i];
    free(ptr);
    return (new_ptr);
}
