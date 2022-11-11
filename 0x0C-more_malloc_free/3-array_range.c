#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function to print an array of integer
 * @min: an argument for the function
 * @max: an argument to the function
 * Return: returns always 0
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int count, i;

	if *main > max)
		return (NULL);

	count = (max - min) + 1;

	a = malloc(sizeof(int) * count);

	if (a == NULL)
		return ( NULL);

	for (i = 0; i < count; i++; min++)
		a[i] = min;

	return (a);
}
