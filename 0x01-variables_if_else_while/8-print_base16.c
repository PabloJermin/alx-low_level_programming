#include <stdio.h>
/**
 * main-prints all numbers in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char gh;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (gh = 'a'; gh <= 'f'; gh++)
	{
		putchar(gh);
	}
	putchar('\n');

	return (0);
}
