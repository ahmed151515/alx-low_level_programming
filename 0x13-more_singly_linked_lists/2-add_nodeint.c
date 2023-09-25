#include "lists.h"
/**
 * add_nodeint - add_nodeint
 * @head: pointer
 * @n: num
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
