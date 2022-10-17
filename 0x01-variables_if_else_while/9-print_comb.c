#include <stdio.h>
/**
 * main-prints random numbers
 * Return: returns a numbre
 */
int main(void)
{
	int n;

	for (n = 0; && n < 9)
	{
		putchar(n);
		if (n !=8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return(0);
}
