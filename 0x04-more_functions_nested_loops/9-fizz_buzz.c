#include <stdio>
/**
 * main - printing numbers
 *Returns: fizzbuzz
 */
int main (void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		int p,r,s;
		char s = ' ';
		char f = "Fizz";
		char b = "Buzz";
		char fb = "FizzBuzz";
		p = x % 3;
		r = x % 5;

		if(p == 0 && r == 0)
		{
			printf("%c", fb);
			printf("%c", s);
		}
		else if (p == 0)
		{
			printf("%c", f);
			printf("%c", s)
		}
		else if (x % 5 == 0)
		{
			printf("%c", b);
			printf("%c", s);
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
