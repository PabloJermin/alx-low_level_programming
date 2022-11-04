#include "main.h"
/**
 * is_prime_number - indicates a prime number 
 * @n: is a parameter to be function
 * Return: Always 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		if  (n % 2 == 0)
		{
			return (0);
		}
		else if (n % 2 == 1)
		{
			return (1);
		}
	}
	return (0);
}
