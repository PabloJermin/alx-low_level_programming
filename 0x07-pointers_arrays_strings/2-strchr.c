#include "main.h"
/**
 * _strchr - locating the character of a string
 * @s: a parameter to the function
 * @c: a parameter to the function
 * Return: always returns a number
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
