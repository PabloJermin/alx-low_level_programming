#include "main.h"
/**
 * _strchr - locating the character of a string
 * @s: a parameter to the function
 * @c: a parameter to the function
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (* != c)
	{
		return (0);
	}
	return (i);
}
