#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a string in a copy
 * @str: an argument to the function
 * Return: returns a pointer to the arfunction
 */
char *_strdup(char *str)
{
	char *str1;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (; str[len]; len++)
		;
	str1 = malloc(len + 1);
	p = str1;
	if (str1 == NULL)
		return (NULL);
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (str1);
}
