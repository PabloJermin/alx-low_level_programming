#include <stdio.h>
/**
 * main-printing base 10 numbers
 * Return: Always 0 *Success)
 */
int main(void)
{
	int numbs = 0;

	while (numbs < 10)
	{
		putchar(numbs);
		numbs++;
	}
	putchar('\n');
	return (0);
}
