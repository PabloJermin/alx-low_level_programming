#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x, y, mod, rem;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; ++y)
		{
			mod = y % 10;
			rem = y / 10;
			
			_putchar(y);
		}
			_putchar('\n');
	}
}
