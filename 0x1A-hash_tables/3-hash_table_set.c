#include "hash_tables.h"
/**
 * hash_table_set - set item
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (key == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = malloc(strlen(key) + 1);
	if (new->key == NULL)
	{
		return (0);
	}
	new->value = malloc(strlen(value) + 1);
	if (new->value == NULL)
	{
		return (0);
	}

	strcpy(new->key, key);
	strcpy(new->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
