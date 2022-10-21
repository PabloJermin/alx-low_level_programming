#include <stdio.h>
#include "main.h"
/**
 * _isdigit - looks out for a number
 * @c: am iargument to check for a number
 * Return: 1 if there is a number and 0 if there is no number
 */
int _isdigit(int c)
{
	int x;
	
	for (x = 0; x <= 10; x++)
	{
		if (c == x)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
