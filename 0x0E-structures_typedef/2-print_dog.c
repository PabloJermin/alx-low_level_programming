#include "main.h"
#include <stdio.h>
#ifndef _MAIN_H_
#define _MAIN_H
/**
 * print_dog - a function struct to print  the name of a deg
 * @d: an argument to get the name of the dog
 * Returmn: alwasy a success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %d\n", (d->age) ? d->age : 0);
		printf("Ownwe: %s\n", (d->owner) ? d->owner : "(nil)");
}
#endif
