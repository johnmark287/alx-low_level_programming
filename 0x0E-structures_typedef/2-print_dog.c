#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints members value for struct dog d.
 * @d: struct containing info in dog.
 * Return: void.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", (d->age > 0) ? d->age : -1);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
