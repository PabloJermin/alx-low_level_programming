#include "main.h"
/**
 * _print_rev_recursion - printing characters in a reverse position
 * @s: a variable for the function
 */
void _print_rev_recursion(char *s)
{
	if ( *s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if ( *s == '\0')
	{
		_putchar('\n');
	}
}
