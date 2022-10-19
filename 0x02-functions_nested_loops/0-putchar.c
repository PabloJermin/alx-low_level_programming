#include "main.h"
/**
 * main- print the words _putchar
 * Return: 0
 */
int main(void)
{
	char words[9] = "_putchar";
	int a = 0;

	for (a = 0; a < 8; a++)
	{
		_putchar(words[a]);
	}
	_putchar('\n');

	return (0);
}
