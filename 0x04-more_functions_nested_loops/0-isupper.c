#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper : chesks for upper case letter
 * @c : an argument of integer
 * Return : returns 1 if true or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
