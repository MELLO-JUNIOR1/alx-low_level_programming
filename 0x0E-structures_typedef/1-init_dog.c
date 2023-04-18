#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function initialize a variable of type struct dog
 * @d: pointer to struct type
 * @name: pointer to string
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
