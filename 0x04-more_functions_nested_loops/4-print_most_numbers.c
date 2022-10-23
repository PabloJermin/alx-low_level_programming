#include "main.h"
/**
 * print_most_numbers - To print some numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		y = x;

		if (x != 2 || x != 4)
		{
			_putchar(y);
		}
		else
		{
		
		}
	}
	_putchar('\n');
}
