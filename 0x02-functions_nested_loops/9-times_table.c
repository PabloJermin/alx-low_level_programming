#include "main.h"
/**
 * times_table - myltiplying the time table for 9
 * Return : always 0
 */
void times_table(void)
{
	int a; b; zeros; ones; result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			zeros = result / 10;
			ones = result % 10;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(zeros + '0');
				_putchar(ones + '0');
			}
			_putchar('\n');
		}
	}
}
