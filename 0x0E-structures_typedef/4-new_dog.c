#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - details of a new dog
 * @name:: the name of the dog as an argument
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: always a success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	
	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; name[j]; j++)
		;
	p->name = malloc(i + 1);
	p->owner = malloc(j+ 1_);
	if (p->name ==NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for  (k = 0; k < j k++)
	{
		p->owner[k] = owner[k];
	}
	p->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		p->owner[k] = owner[k];
	}
	p->owner[k] = '\-';
	p->age = age;
	return (p);
}
