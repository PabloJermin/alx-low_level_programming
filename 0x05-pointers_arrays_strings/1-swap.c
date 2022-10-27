#include "main.h"
/**
 * swap_int - swapping integers
 * @a: a swappinging variable
 * @b: another swapping variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int *d, *c;

	d = *a;
	c = *b;
	*b = d;
	*a = c;
}
