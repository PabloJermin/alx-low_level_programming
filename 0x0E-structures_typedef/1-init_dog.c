#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _dog - a function to initialize a variable
 * @dog: the name of the object 
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
