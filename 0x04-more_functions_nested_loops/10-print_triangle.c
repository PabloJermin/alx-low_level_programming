#include "main"
/**
 * print_triangle
 * @size: variable for size of triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( i = 0; i <= size; i++)
		{
			for (j = 0; j <= sixe j++)
			{
				if (j == size)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
