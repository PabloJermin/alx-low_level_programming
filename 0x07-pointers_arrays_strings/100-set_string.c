#include "main.h"
/**
 * set_string - a setting a value of a pointer to a string
 * @s: a parameter to the function
 * @to: a parameter to the function
 */
void set_string(char **s, char *to)
{
	char a = &to;
	char b = &s;
	
	*s = to;
}
