#include "hash_tables.h"
/**
 * hash_table_print - print
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int falg = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (falg == 1)
			{
				printf(", ");
			}
			printf("'%s' : '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			falg = 1;
		}
	}
	printf("}\n");
}
