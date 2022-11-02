#include "main.h"
/**
 * _strlen_recursion - determine the lenght of the string
 * @s: a variable to the function
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	}
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
