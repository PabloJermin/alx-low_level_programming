#include "main.h"
/**
 * _islower(int c)- checks for lower characters
 * Return: 0
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
