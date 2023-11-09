#include "lists.h"
/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: h
 * @index: index
 * Return: bool
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *he = *head, *cur;

	for (i = 0; i < index; i++)
	{
		if (he == NULL)
		{
			return (0);
		}
		he = he->next;
	}
	cur = he->prev;
	cur->next = he->next;
	(he->next)->prev = cur;
	free(he);
	return (1);
}
