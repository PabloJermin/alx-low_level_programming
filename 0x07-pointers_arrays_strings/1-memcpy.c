#include "main.h"
/**
 * _memcpy -  copy a memory to a variable
 * @dest: a variable to hold a copied item
 * @src: the parameter of the source
 * @n: the parameter to receive the number
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int n;

	for (i = 0; i < n; i++)
	{
		dest = src[i];
	}
	return (dest);
}
