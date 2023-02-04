#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table
 * @ht: a pointerto the hash table
 * Return: returns the  the items to be printed form the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;

	if (ht == NULL)
		return;
	printf('{');

	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			test = ht->array[i];
			while (test)
			{
				printf("%s '%s': '%s'", n==0 ? "" : ", ", test->key, test->value), n++;
				test = test-> next;
			}
		}
	}
	printf("}\n");
