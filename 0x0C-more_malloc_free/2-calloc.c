#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of array elements.
 * @size: size of each array element.
 * Return: pointer to the allocated memory on success or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);
    ptr = calloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    return (ptr);
}
