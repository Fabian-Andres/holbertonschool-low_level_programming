#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size of hash table
 * Return: pointer of new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *newHashTable;

	newHashTable = malloc(sizeof(hash_table_t));
	if (newHashTable == NULL)
		return (NULL);

	newHashTable->size = size;
	newHashTable->array = malloc(size * sizeof(hash_node_t *));
	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}

	while (i < size)
	{
		(newHashTable->array)[i] = NULL;
		i++;
	}

	return (newHashTable);
}
