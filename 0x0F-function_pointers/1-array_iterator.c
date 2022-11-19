#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates over an array
 * @array: the aray of items in the argument
 * @size: the size of the array
 * @action: an argument to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array = NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
}