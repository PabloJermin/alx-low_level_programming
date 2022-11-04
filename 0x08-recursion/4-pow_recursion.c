#include "main.h"
/**
 * _pow_recursion - exponenntial power
 * @x: the parameter of the function
 * @y: the parameter of the function
 * Return: always a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}

	else if (x % 2 == 0)
	{
		return (_pow_recursion(x, y/2) * _pow_recursion(x, y/2));
	}
	else
	{
		return (x * _pow_recursion(x, y/2) * _pow_recursion(x, y/2));
	}
