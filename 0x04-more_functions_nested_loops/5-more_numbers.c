#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x, y, re;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			re = y % 10;

			if (y > 9)
			{
				_putchar(y + re);
			}
			else
			{
				_putchar(y);
			}
		}
		_putchar('\n');
	}
}
