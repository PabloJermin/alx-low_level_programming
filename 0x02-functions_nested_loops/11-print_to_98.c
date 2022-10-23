#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print values
 * @n: a variable from user
 * Return: Returns 0 and 1
 */
void print_to_98(int n)
{
	int x;
	char r = ' ';
	char co = ',';

	if (n == 98)
	{
		printf("%i", n);
		printf("%c", r);
		printf("\n");
	}
	else if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			if(x == 98)
			{
				printf("%i", x);
				printf("%c", r);
			}
			else
			{
				printf("%i", x);
				printf("%c", co);
				printf("%c", r);
			}
		}
		printf("\n");
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%i", x);
				printf("%c", r);
			}
			else
			{
				printf("%i", x);
				printf("%c", co);
				printf("%c", r);
			}
		}
		printf("\n");
	}
}
