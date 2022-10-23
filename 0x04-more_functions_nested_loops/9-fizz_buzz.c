#include <stdio>
#include "main"
/**
 * main - printing numbers
 *Returns: fizzbuzz
 */
int main (void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if(x % 3 == 0 && x % 5 == 0)
		{
		_putchar('FizzBuzz');
		_putchar(' ');
		}
		else if (x % 3 == 0)
		{
			_putchar('Fizz');
			_putchar(' ');
		}
		else if (x % 5 == 0)
		{
			_putchar('Buzz');
			_putchar(' ');
		}
		else
		{
			printf("%i", x);
			_putchar(' ');
		}
		_putchar('\n');
	}

	return (0);
}
