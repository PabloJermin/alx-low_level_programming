#include "main.h"
/**
 * _puts_recursion - a recursionn fo characters
 * @s: a variable to the function
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
