#include <stdio.h>
/**
 * main-This produces a capital letter and a small letter
 * Return: Always 0 (success)
 */
int main(void)
	{
		char lcase = 'a';
		char uc = 'A';
		while (lcase <= 'z'; && uc <= 'Z')
		{	
			putchar(lcase);
			putchar(uc);
			lcase++;
			uc++;
		}
		putchar('\n');
		return (0);
	}
