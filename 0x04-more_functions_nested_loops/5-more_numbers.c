#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++;)
	{
		for (y = 0; y <= 15; y++;)
		{
			_putchar(y);
		}
		_putchar(x);
	}

	_putchar('\n');
}
