#include "main.h"
/**
 * _strcmp - comparing strings
 * @s1: a parameter for the function
 * @s2: a parameter for the function
 * Return: Always a number
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return )0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
