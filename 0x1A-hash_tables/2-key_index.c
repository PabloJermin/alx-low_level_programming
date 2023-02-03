#include "hash_tables.h"

/**
 * key_index - a function that returns the index of a key
 * @key: a pointer to the index
 * @size: the size of the hash stable
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djd2(key) % size);
}
