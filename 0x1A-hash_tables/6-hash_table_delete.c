#include "hash_tables.h"

/**
 * hash_table_delete -  free all
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *del;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			del = tmp;
			tmp = tmp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
