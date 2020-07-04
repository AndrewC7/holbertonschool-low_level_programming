#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: array size
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (!hash_table)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	return (hash_table);
}
