#include "main.h"
/**
 * reset_to_98 - reseting a number to a number
 * @n: a variable of the function
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *p;
	
	p = &n;
	*p = 98;
}
