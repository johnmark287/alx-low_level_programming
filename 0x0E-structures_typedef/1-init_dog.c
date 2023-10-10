#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: Structure pointer.
 * @name: struct dog 1st member.
 * @age: struct dog 2nd member.
 * @owner: struct dog 3rd member.
 * Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
