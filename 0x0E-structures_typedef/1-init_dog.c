#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copys string to another empty string.
 * @s: string to copy.
 * Return: pointer to string on success, NULL on failure
*/
char *_strdup(char *s)
{
int i, j;
char *str;
for (i = 0; s[i]; i++)
;
str = malloc((i + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (j = 0; j < i; j++)
str[j] = s[j];
str[j] = '\0';
return (str);
}
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
struct dog *dog;
char *newName;
char *newOwner;

dog = malloc(sizeof(d));
if (dog == NULL)
return;
newName = _strdup(name);
newOwner = _strdup(owner);
if (dog->name == NULL || dog->owner == NULL)
{
free(newName);
free(newOwner);
free(dog);
return (NULL);
}
dog->name = newName;
dog->age = age;
dog->owner = newOwner;
}
