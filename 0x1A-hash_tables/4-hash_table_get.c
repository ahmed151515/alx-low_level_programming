#include "hash_tables.h"
/**
 * hash_table_get - get item
 * @ht: hash table
 * @key: key of value
 * Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		cur = ht->array[index];
		while (strcmp(cur->key, key) != 0)
		{
			cur = cur->next;
		}
		if (cur != NULL)
			return (cur->value);
	}
	return (NULL);
}
