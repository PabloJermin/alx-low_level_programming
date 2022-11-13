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
	int i, j;
	int *p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			p = malloc(sizeof(int) * width);
			p[j] = 0;
		}
	}
}

