#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all - a variable function that sums all the arguments
 * @n: the number of arguments
 * Return: returns a number
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	if (n == 0)
		return (0);
	else
	{
		va_list arg;
		va_start (arg, n);
		for (i = 0; i <= n; i++)
		{
			int j = va_arg (arg, int);
			sum = sum + j;
		}
		va_end (arg);
	}
	return (sum);
}
