#include "main.h"
/**
 * leet - Encodes a string
 * @s: a parameter to the function
 * Return: Always a number
 */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char m[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;
		while (b < l)
		{
			if (s[a] == m[b] || s[a] - 32 == m[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
