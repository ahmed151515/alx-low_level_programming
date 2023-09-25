#include "lists.h"
/**
 * reverse_listint - reverse_listint
 * @head: fjmlgjnhd
 * Return: fdngj,df
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head, *next;

	*head = prev->next;
	prev->next = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
