#include "main.h"
/**
 * print_last_digit - prints last digits
 * @n : arguement for the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 10)
	last = n * -1;

	_putchar(last + '0');

	return (0);
}
