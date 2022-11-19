#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @seperator: a seperator argument
 * @n: the number of arguments
 * Return: always a number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbs;
	int x = va_arg(numbs, int);
	va_start(numbs, separator);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", x);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}		
