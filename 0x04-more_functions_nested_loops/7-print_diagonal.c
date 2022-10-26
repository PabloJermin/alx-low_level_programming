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
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j != i)
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
