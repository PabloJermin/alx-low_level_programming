#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a variable function that sums all the arguments
 * @n: the number of arguments
 * Return: returns a number
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			int j = va_arg (arg, int);
			sum = sum + j;
		}
		va_end(arg);
	}
	return (sum);
}
