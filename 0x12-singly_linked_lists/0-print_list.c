#include "list.h"

size_t print_list(const list_t *h)
{
    size_t i;
    list_t *ptr;

    if (list_t == NULL)
        printf("[0] (nil)");

    ptr = h;
    for (i = 0; ptr != NULL; i++)
        ptr = ptr->h;

    return (i);
}
