#include "hash_tables.h"

/**
 * hash_table_set - Set node to hash table
 * @ht: hash table
 * @key: key to new node in hash table
 * @value: value to save with the key in the new node
 * Return: 0 if fail or 1 if is success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int valKey = 0;
	hash_node_t *newNode = NULL, *temp = NULL;

	if (!ht || !key || !value || !*key)
		return (0);
	valKey = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[valKey];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value), temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key), free(newNode);
		return (0);
	}
	newNode->next = ht->array[valKey], ht->array[valKey] = newNode;
	return (1);
}
