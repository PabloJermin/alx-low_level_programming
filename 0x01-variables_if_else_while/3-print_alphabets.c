#include <stdio.h>
/**
 * main-This produces a capital letter and a small letter
 * Return: Always 0 (success)
 */
int main(void)
	{
		char lcase = 'a';
		char uc = 'A';

		while (lcase <= 'z')
		{
			putchar(lcase);
			lcase++;
		}
		while (uc <= 'Z')
		{
			putchar(uc);
			uc++;
		}
		putchar('\n');
		return (0);
	}
