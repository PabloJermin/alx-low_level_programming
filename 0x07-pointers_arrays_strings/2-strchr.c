#include "main.h"
/**
 * _strchr - locating the character of a string
 * @s: a parameter to the function
 * @c: a parameter to the function
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		if (c == *s[i])
		{
			*p = s[i];
			return (p);
		}
	}
}
