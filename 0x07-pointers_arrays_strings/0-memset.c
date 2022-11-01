#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: a parameter to the function
 * @b: a parameter to the function
 * @n: a parameter to the function
 * Return: Always 1 or 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *rep;
	
	for (i = 0; i <= n - 1; i++)
	{
		*rep  += s[i];
	}
	return (rep = *b);
}
