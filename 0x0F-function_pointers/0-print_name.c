#include "function_pointers.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_name - prints the name of the  function
 * @name: the name of argument provided
 * @f: the argumetn to the function
 * Return: alwasy a success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
