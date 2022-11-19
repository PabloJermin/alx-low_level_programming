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
	char sp = va_arg(numbs, char);
	va_start(numbs, n);

	for (i = 0; i < n; i++)
	{
		if (separator[i] != NULL)
		{
			printf("%s\n", sp);
			printf("%d\n", x);
		}
	}
	pintf("\n");
	va_end(numbs);
}	
