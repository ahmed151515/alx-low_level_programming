#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
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
	while (h != NULL)
	{
		h = h->next;
	}
	new->n = n;
	(*head)->prev = new;
	new->next = NULL;
	new->prev = h;
	return (new);
}
