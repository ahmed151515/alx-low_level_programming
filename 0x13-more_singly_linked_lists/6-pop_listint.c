#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: pointer
 * Return: bdfgkbkg
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int item;

	if (*head == NULL)
	{
		return (0);
	}
	next = (*head)->next;
	item = (*head)->n;
	free(*head);
	(*head) = next;
	return (item);
}
