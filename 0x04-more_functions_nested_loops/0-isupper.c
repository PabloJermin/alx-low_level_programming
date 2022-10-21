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
	char word;

	if (word >= 'A' && word <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
