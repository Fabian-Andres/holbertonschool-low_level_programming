#include "hash_tables.h"
/**
 * key_index - get key index
 * @key: key to find the index
 * @size: size to find the index
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
