#include "main.h"
/**
 * print_last_digit - prints last digits
 * @r : arguement for the function
 * Return: 0
 */
int print_last_digit(int r)
{
	int last = r % 10;

	if (r < 10)
	{
		last = n * -1;
	}

	_putchar(last + '0');

	return (0);
}
