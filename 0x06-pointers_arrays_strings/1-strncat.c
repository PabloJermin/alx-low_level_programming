#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: a parameter for the function
 * @src: another parameter for the function
 * @n: a parameter for the function
 * Return: Always a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i,j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i +j] = '\0';
	retun (dest);
}