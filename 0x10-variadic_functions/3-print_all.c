#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: all the types of arguments to be printed
 * Return: alwasy a success
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list numb;

	va_start(numb, format);
	for (i = 0; i < n; i++)
	{
		if (format[i] == "c")
		{
			char c = va_numb(numb, char);
			printf("%s\n", c);
		}
		else if (format[i] == "i")
		{
			int x = va_munb(munb, int);
			printf("%d\n", x);
		}
		else if (format[i] == "f")
		{
			float f = va_numb(munb, float);
			printf("%f\n", f);
		}
		while (* == NULL)
			print("(nil)");
	}
	va_end;
