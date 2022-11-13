#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array of char
 * @size: the size of the array
 * @c: the character to be mapped to
 * Return: always a number
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
