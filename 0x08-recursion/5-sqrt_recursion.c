#include "main.h"
/**
 * varincrease = increases a var by 1
 * @n: a variable for the function
 * @i: a second variable for the function
 * Return: always a number
 */
int _varincrease(int n, int i)
{
	if (i * i == n)
	{
		return (1);
	}
	else if (i * i > n)
	{
		return (-1)
	}
	else if (i * i < n)
	{
		return (_varincrease(i + 1, n));
	}
	return (i);
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
		return (_varincrease(n, 1));
	}
	return (-1);
}
