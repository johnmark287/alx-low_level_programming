#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all memory allocated by new_dog().
 * @d: pointer to the new_dog struct.
 * Return: void.
*/
void free_dog(dog_t *d)
{
    if (d == NULL || d->name == NULL || d->owner == NULL)
        return;
    free(d->name);
    free(d->owner);
    free(d);
}
