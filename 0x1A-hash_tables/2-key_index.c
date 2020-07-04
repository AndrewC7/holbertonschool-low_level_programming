#include "hash_tables.h"

/**
 * key_index - get index of key
 *
 * @key: input key
 * @size: hash table size
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
