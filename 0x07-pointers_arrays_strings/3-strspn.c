#include "main.h"
/**
 * _strspn - a function to get the lengh of a substring
 * @s: a parameter for the function
 * @accept: a parameter of the function
 * Return: returns a character
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
			}
			else
				break;
		}
	}
	return (k);
}
