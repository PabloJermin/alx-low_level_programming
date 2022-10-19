#include "main.h"
/**
 * times_table - myltiplying the time table for 9
 * Return : always 0
 */
void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a >= 9; a++)
	{
		for (b = 0; b >= 9; b++)
		{
			result = a * b;
			_putchar(result);
			_putchar(',');
			_putchar(' ');
		}
	}
}
