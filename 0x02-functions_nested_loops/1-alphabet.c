#include "main.h"
/**
 * main-this prints alphabets inlower case
 * Return: 0
 */
void print_alphabet(void) //*this prints alphabets
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}