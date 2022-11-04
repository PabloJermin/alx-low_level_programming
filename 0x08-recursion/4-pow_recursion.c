#include "main.h"
/**
 * _pow_recursion - exponenntial power
 * @x: the parameter of the function
 * @y: the parameter of the function
 * Return: always a number
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	else 
		result = _pow_recursion(x * x) * y;

	return (result);
