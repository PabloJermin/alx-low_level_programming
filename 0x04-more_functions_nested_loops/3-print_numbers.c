#include <stdio.h>
#include "main.h"
/**
 * print_numbers - printing numbers
 * Return: alwasy 0
 */
void print_numbers(void)
{
	int x;
	int y;

	for (x = 0;  x < 10; x++)
	{
		y = x;
		_putchar(y);
		_putchar('\n');
	}
	return (0);
}
