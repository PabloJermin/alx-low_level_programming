#include "main.h"
/**
 * _strcat - strings together
 * @dest: an argumetn to the function
 * @src: an aurgument for the function
 * Return: Always a 0 or 1 or char a
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (a);
}
