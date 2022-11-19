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
	int i;

	va_list sep;
	
	if (seperator == NULL || *seperator == 0)
		sep = "";
	else
		va_start
