#include "main.h"
/**
 * factorial - a fctorial of a number
 * @n: the  number for the factorial
 * Return: Always a number
 */
int factorial(int n);
{(
	if (n < 0)
	{
		return (-1);
	})
	else
		return (n * factorial(n - 1));
}
