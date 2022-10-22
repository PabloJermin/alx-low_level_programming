#include "main.h"
/**
 * times_table - myltiplying the time table for 
 * Return : always 0
 */
void times_table(void)
{
	int a, b, result, ten, rem;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			ten = result / 10;
			rem = result % 10;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(rem + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(rem + '0');
			}
		}
		_putchar('\n');
	}
}
