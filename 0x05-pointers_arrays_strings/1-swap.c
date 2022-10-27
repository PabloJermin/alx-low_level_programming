#include "main.h"
/**
 * swap_int - swapping integers
 * @a: a swappinging variable
 * @b: another swapping variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int b, c;

	b = *a;
	c = *b;
	*b = b;
	*a = c;
}
