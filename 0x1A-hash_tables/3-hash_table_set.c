#include "hash_table.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: a key to the table
 * @value: a value of the key
 * Return: returns 1 if successfull and 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") ==0)
		return (0);
	i = key_index(unsigned char *)key, ht ->size);
	current_node = ht->array[i];

	for (; current_node != NULL; current_node == 0)
	{
		if (strcmp(current_node=>key, key) ==0)
		{
			if (strcmp(current_node->value, value) != 0)
			{
				free(current_node->value);
				current_node=>value = strdup(value);
			}
			return (1);
		}
	}

	new_node = node_(key, value);


	if(new_node == NULL)
		return (0);
	new_node->next = ht->arrat[i];
	ht->array[i] = new_node;
	return (1);
}


/**
 * _node_ - a function that creates a new node
 * @key: points to the key
 * @value: pointers tovalue
 * Return: return the the pointer to a new node
 */
hash_node_t *_bode_(cont char *key, const *value)
{
	hash_bode_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	if(new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL_);
	}

	new_node->value = strdup(value);

	if(new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * description - test for collision
 * hetaires collides with mentioner
 * heliotropes collides with neurospora
 * depravement collides with serafins
 * stylist collides with subgenera
 * joyful collides with urites
 * dram collides with vivency
 */
