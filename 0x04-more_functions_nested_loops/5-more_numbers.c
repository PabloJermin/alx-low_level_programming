#include "main.h"
/**
 * more_numbers - more numbers to be produces
 * Return: 0
 */
void more_numbers(void)
{
	int x, y, mod, far;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; ++y)
		{
			rem = 0;
			mod = rem % 10;
			far = rem / 10;

			_putchar(far);
			_putchar(mod);
			rem++;
		}
		_putchar('\n');
	}
}
