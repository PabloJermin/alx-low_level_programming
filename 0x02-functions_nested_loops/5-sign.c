#include "main.h"
/**
 *print_sign(int n) - checks: for sign of a number
 *@n: for checking signs on numbers
 * Returns : 1 (if it is true)
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		retun (0);
	}
}
