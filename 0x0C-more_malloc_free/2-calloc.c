#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  a function allocating a memory to an array
 * @nmemb: an argument to the function
 * @size: an argument to the function
 * Return: returns an argument to the function
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb *size)
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
