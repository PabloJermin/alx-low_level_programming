#include "main.h"
/**
 * print_rev - prints reverse wordsd
 * @s: 
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a = s['\0'];
	int i;

	for (i = a; i >= 0; i--)
	{
		_putchar(i);
	}
	_putchar('\n');
}
