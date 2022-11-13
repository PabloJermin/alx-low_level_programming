#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenating two strings
 * @s1: an argument of character to the function
 * @s2: a second argument of character to the function
 * Return: always a charater or null
 */
char *str_concat(char *s1, char *s2)
{
	char *p, s3;
	int len = 1, i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		len =+ i;
		s3 =+ s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len =+ i;
		s3 =+ s2[i];
	}
	p = malloc(sizeof(s1)*len);
	for (i = 0; i <= len; i++)
		p = s3;
	return (p);
}
