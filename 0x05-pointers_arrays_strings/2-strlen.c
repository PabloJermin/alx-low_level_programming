#include "main.h"
/**
 * _strlen - calculating the lengh of string
 * @s: a parameter for the function
 * Return: aalways return 1 or 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
