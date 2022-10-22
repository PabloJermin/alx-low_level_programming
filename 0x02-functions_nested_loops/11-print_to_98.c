#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print values
 * @r: a variable for spave
 * @co: a variable for comma
 * Return: Returns 0 and 1
 */
void print_to_98(int n)
{
	int x;
	char r = ' ';
	char co = ',';

	if (n > 98)
	{
		for (x = n; x == 98; x--)
		{
		printf("%i", x);
		printf("%c", co);
		printf("%c", r);
		}
	}
	else
	{
		for (x = n; x <= 97; x++)
		{
			printf("%i", x);
			printf("%c", co);
			printf("%c", r);
			if (x == 98)
			{
				printf("%i", x);
			}
		}
	}
}
