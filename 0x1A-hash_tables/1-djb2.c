#include "hash_tables.h"

/**
 * hash_djb2 - a function that implements the djb2 algorithm
 * @str: a pointer to a null string
 * Return: returns the has.
 */
unsigned long int hash_djb2(cont unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5 ) + hash) + c;
	}
	return (hash);
}

