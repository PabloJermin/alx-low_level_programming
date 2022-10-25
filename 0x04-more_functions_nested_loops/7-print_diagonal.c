#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * Return: Always 0
 */
void print_diagonal(int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
