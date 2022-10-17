#include <stdio.h>
/**
 * main-prints random numbers
 * Return: returns a numbre
 */
int main(void)
{
	int n;

	for (n = 8; n < 18; n++)
	{
		putchar(n);
		if (n != 17)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
