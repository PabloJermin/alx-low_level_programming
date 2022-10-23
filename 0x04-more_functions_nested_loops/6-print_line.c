#include "main.h"
/**
 * print_line - prints lines
 * @n: variable for number of loops
 * Return: 0
 */
void print_line(int n)
{
	for (x = 0; x == n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('_');
	}
}
