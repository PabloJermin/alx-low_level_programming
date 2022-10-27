#include "main.h"
/**
 * rev_string - for reversing strings
 * @s: a parameter for the function
 * Return: Always 0
 */
void rev_string(char *s)
{
	int b = 0;
	int k = s[b];
	int a;
	int i = 0;

	while (k != '\0')
	{
		b++;
		i++;
	}
	for (a = i; a >= 0; a--)
	{
		_putchar(s[i]);
	}
}
