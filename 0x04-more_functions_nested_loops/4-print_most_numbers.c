#include "main.h"
/**
 * print_most_numbers - To print some numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 57; x++)
	{
		if (x != 50 || x != 52)
		{
			_putchar(x);
		}
		else
		{
			return (void);
		}
		_putchar('\n');
		
	}
}
