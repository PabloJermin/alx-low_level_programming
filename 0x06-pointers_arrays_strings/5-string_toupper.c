#include "main.h"

/**
 * string_toupper - changing lower case letters to upper cases
 * @s: a parameter
 * Return: Alwasy 0 or 1
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
			i++;
		}
	}
	return (s);
}
