#include <stdio.h>
/**
 * main-This prints all single digits in base 10 starting from0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb  = 0;

	while (numb < 10)
	{
		printf("%i", numb);
		numb++;
	}
	putchar('\n');

	return (0);
}
