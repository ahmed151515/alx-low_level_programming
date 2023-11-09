#include "lists.h"
/**
 * add_dnodeint_end - add_dnodeint_end
 * @head: h
 * @n: n
 * Return: p
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (h == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	new->prev = h;
	return (new);
}
