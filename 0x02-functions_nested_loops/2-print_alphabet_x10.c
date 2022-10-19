#include "main.h"
/**
 * print_alphabet_x10-printing alphabet 10x
 * return : 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	char set = 0;

	while (set < 10)
	{
		alpha = 'a';
		while  (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		set++
}
