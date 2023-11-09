#include "lists.h"
/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @head: h
 * @n: n
 * @idx: idx
 * Return: p
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *he = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (he == NULL)
	{
		free(new);
		return (add_dnodeint(h, n)); 
	}
	for (i = 0; i < idx; i++)
	{
		if (he == NULL)
		{
			free(new);
			return (NULL);
		}
		he = he->next;
	}
	if (he->next == NULL)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	new->prev = he->prev;
	new->next = he;
	he->prev = new;
	(new->prev)->next = new;
	return (new);
}
