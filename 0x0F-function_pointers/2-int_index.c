#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index -searches for an integer
 * @array: the array of items
 * @size: the size of the array
 * @cmp: an argument
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == NULL || cmp == NULL || array == NULL)
		return;
	else
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			       return (i);
		}
	return (-1);
}
