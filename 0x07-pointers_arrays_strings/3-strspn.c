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

	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if ( k == 0)
		{
			break;
		}
	}
	return (1);
}
