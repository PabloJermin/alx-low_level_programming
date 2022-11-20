#include "variadic_functions.h"
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
	char *sp;
	char *p, *a;

	if (separator == NULL || *separator == 0)
 		sp = " ";
	else
		sp = (char *) separator;
	va_start(chas, n);

	for ( i = 0; i < n; i++)
	{
		p = va_arg(chas, char*);
		if(p == NULL)
			p = "(nil)";
		printf("%s%s\n", sp, p);
	}
	if(n > 0)
	{
		a = va_arg(chas, char*);
		printf("%s\n", a);
	}
	va_end(numbs);
	printf("\n");
}
