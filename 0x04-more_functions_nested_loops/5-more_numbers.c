#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x, y, mod, far;
	int n = 14;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= n; ++y)
		{
			mod = y % 10;
			far = y / 10;

			_putchar(far);
			_putchar(mod);
		}
		_putchar('\n');
	}
}
