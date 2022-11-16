#include "main.h"
#include <stdio.h>
/**
 * print_dog - a function struct to print  the name of a deg
 * @d: an argument to get the name of the dog
 * Returmn: alwasy a success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", d->name);
	else 
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}

