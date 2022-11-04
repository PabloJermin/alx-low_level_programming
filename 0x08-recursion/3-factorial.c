#include "main.h"
/**
 * factorial - a fctorial of a number
 * @n: the  number for the factorial
 * Return: Always a number
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else
		result = n * factorial(n - 1);
	return (result);
}
