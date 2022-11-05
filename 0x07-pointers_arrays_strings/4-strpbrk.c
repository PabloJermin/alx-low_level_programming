#include "main.h"
/**
 *_strpbrk - a function to search any string
 *@s: a parameter of the function
 *@accept: a parameter of the function
 *Return: returns a character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != 0)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
