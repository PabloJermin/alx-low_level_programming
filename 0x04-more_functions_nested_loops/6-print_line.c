#include "main.h"
/**
 * print_line - prints lines
 * @n: variable for number of loops
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x == n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if ( n < 0)
		{
		}
		_putchar('\n');
	}
}
