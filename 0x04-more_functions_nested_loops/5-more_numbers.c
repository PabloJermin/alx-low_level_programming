#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x, y, mod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y < 15; y++)
		{
			mod = y % 10;
			
			if (y > 9)
			{
				_putchar(y + mod);
			}
			else
			{
				_putchar(y);
			}
			_putchar('\n');
		}
	}
}
