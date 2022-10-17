#include <stdio.h>
/**
 * main-displays all alphabets but e and q
 * Return: This ruturns all alphabets excluding two of them
 */
int main(void)
{
	char lcs = 'a';

	while (lcs <= 'z')
	{
		if((lcs !='e'); && (lcs != 'q'))
		{
			putchar(lcs);
			lcs++;
		}
	}
	return (0);
}
