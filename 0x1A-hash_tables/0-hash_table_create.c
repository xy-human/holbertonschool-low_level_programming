#include "hash_tables.h"

/**
 * hash_table_create - Create mallocs to hash table
 * @size: size to array in struct hash_table_t
 * Return: New struct type hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);
	hashTable->size = size;

	hashTable->array = calloc(size, sizeof(hash_node_t *));
	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
