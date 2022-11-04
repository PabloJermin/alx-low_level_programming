#include "main.h"
/**
 * varincrease = increases a var by 1
 * @n: a variable for the function
 * @i: a second variable for the function
 * Return: always a number
 */
int varincrease(int n, int i,)
{
	if (n * n == i)
	{
		return (n);
	}
	else if (n * n > i)
	{
		return (-1)
	}
	else if (n * n < i)
	{
		return (varincrease(n + 1, n));
	}
}
/**
 * _sqrt_recursion - a square root of the function
 * @n: a parameter to the function
 * Return: Always a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0 )
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 1 )
	{
		return (varincrease(1, n));
	}
	return (-1);
