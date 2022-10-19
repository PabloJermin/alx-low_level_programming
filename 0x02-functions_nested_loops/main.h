#ifndef "_putchar"
#define "_puchar"
#include <unistd.h>
#endif
/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *     * On error, -1 is returned, and errno is set appropriately.
 *
 **/
int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

	return(_putchar);
}
