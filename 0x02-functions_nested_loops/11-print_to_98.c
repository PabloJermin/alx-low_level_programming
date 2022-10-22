#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print values
 * Return: Returns 0 and 1
 */
void print_to_98(int n)
{
	int n;
	int x;

	for (x = n; x <= 98; x++)
	{
		printf("%i", x);
		printf(',');
		printf(' ');
	}
	return (0);
}
