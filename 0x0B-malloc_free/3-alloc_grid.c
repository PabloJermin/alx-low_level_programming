#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  a pointer to a two dimentional array.
 * @width: n argument to the function
 * @height: another argument to the pointer
 * Return: returns a two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int i, k, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int*) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		p[i] = malloc(width * sizeof(int));
	       if (p[i] == NULL)
	       {
		       while (i >= 0)
		       {
			       free(p[i]);
			       i--;
		       }
		       free(p);
		       return (NULL);
	       }
	}
	for (j = 0; j <= width; j++)
	{
		for (k = 0; k < width; k++)
			p[j][k] = 0;
	}
	return (p);
}
