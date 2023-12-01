#include "hash_tables.h"

/**
 * key_index - get index
 * @key: key
 * @size: size hash
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
