#include "main.h"
/**
 * _strlen_recursion - determine the lenght of the string
 * @s: a variable to the function
 * Return: returns a valeu of 1 or 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
