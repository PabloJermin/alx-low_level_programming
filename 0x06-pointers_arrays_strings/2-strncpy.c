#include "main.h"
/**
 * _strncpy - copy string
 * @dest: ca parameter for the function
 * @src: another parameter for the function
 * @n: an integer
 * Return: a value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
