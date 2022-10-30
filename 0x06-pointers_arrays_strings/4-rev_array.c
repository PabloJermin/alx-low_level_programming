#include "main.h"
/**
 * reverse_array - reverseing words
 * @a: a parameter of the function
 * @n: a parameter of the function
 * Return: Always a 1 or 0
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
