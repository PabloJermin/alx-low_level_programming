#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: a string parameter for the function
 * Return: Returns a number
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
