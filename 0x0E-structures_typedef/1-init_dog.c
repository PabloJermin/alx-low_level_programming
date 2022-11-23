#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - a function to initialize a variable
 * @d: the name of the object
 * @name: the name of the object
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: alwasy a success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
