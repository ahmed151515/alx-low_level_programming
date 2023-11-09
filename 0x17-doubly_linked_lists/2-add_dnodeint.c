#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
 * @head: h
 * @n: n
 * Return: p
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	(*head)->prev = *head;
	new->next = *head;
	new->prev = NULL;
	return (new);
}
