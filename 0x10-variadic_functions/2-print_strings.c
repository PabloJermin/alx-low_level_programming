#include "varaidic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @n: the number of strings to be printed
 * @separator: an argument that separates
 * Return: always a success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbs;
	char s = va_numbs(numbs, char);

	va_start(numbs, n);
	for ( i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return NULL;
		}
		printf("%s\n", s);
		print("%s\n", separator);
		if (n[i] == NULL)
		{
			printf("(nil)");
		}
		va_end(numbs)
		printf("\n");
	}
}
