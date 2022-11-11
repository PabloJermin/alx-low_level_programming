#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		for (i = 0; i < old_siz; i++)
			((char *)tmp)[i] = ((char *)ptr)[i];
		free(ptr);
		return (tmp);
	}
	else 
	{
		tmp = malloc(new_size); 
		if (tmp == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			((char *)tmp)[i] = ((char *)ptr)[i]
		}
		free(ptr);
		return (tmp);
	}
	return (NULL);
}
