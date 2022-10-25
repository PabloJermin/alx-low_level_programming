#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * @n: parameter for number or rows and colums
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j == n; j++)
			{
				if (j != n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
