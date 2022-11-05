#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: a parameter to the function
 * @b: a parameter to the function
 * @n: a parameter to the function
 * Return: the value s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
