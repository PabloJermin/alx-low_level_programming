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
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}
