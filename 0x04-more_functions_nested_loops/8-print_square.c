#include "main.h"
/**
 * print_square - printing squares
 * @size: the variable for size
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
