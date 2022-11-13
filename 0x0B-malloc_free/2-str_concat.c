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
	char *s3;
	int len = 0, i = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (len = 0; s1[len] || s2[len]; len++)
		;
	s3 = malloc(sizeof(s1) * len);
	if (s3 == NULL)
		return (NULL);
	for (len = 0; s2[len]; len++)
	{
		s3[i++] = s1[len];
	}
	for (len = 0; s2[len]; len++)
		s3[i++] = s2[len];
	return (s3);
}
