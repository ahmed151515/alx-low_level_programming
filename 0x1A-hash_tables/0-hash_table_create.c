#include "hash_tables.h"
/**
 * hash_table_create - init hash table
 * @size: size of array
 * Return: addres or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;

	new->array = malloc(sizeof(hash_node_t) * size);

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	while (size--)
	{
		new->array[size] = NULL;
	}

	return (new);
}
