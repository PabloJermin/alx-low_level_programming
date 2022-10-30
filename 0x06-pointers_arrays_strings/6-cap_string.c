#include "main.h"
/**
 * cap_string - Capitalizing words of string
 * @s: a parameter for the function
 * Return: Always a number
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = "\t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
						*(s + 1) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
