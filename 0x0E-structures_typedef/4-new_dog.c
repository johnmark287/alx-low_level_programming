#include "dog.h"
#include <stdlib.h>
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
 * new_dog - creates a new struct dog with dynamically allocated strings.
 * @name: Pointer to a string for the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to a string for the owner's name.
 * Return: Pointer to the newly created struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog;
    char *newName, *newOwner;

    newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
        return (NULL);
    newName = _strdup(name);
    newOwner = _strdup(owner);

    newDog->name = newName;
    newDog->age = age;
    newDog->owner = newOwner;
    return (newDog);
}
