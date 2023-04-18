#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: age
 * @owner: dog's owner
 * Return: dog's infos || NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d = malloc(sizeof(dog_t));

if (new_d == NULL)
return (NULL);

new_d->name = malloc(strlen(name) + 1);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}

new_d->owner = malloc(strlen(owner) + 1);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}

new_d->name = strcpy(new_d->name, name);
new_d->age = age;
new_d->owner = strcpy(new_d->owner, owner);

return (new_d);
}
