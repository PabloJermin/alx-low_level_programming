#include <stdio.h>
#include "main.h"
/**
 * print_numbers - printing numbers
 * Return: alwasy 0
 */
void print_numbers(void)
{
	int x = 0;
	int y;

	for (x = 0; x >= 48; x <= 58; x++)
	{
		y = x;
		_putchar(y);
		_putchar('\n');
	}
}