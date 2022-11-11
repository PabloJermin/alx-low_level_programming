#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - to concatenatetwo strings
 * @s2: an argument to the function
 * @s1: a second arugument to the functio
 * @n: the number of arguments 
 * Return: Always 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *d = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 ="";
	for (i = 0; s1[1] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= n)
		n = j;
	d = malloc((i + n + 1) * size of (char));

	if (d == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		d[k] = s1[k];

	for (k = 0; k < n; k++)
		d[k + i] = s2[k];
	d[k + i] = '\0';

	return (d);
}
