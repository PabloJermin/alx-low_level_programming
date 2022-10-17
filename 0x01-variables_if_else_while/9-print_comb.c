#include <stdio.h>
/**
 * main-prints random numbers
 * Return: returns a numbre
 */
int main(void)
{
	int n;

	for (n = 2; n < 22; n++)
	{
		putchar(n);
		if (n != 21)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
