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
		for (y = 48; y <= 57; y++)
		{
			re = y % 10;

			if (y > 57)
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
