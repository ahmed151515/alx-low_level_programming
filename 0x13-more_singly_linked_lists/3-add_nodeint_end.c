#include "lists.h"
/**
 * add_nodeint_end - add_nodeint_end
 * @head: pointer
 * @n: num
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newl = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (newl == NULL)
	{
		return (NULL);
	}
	newl->n = n;
	newl->next = NULL;
	if (tmp == NULL)
	{
		*head = newl;
		return (newl);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
		tmp->next = newl;

	return (newl);
}
