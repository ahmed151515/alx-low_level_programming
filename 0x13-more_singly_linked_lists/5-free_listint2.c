#include "lists.h"
/**
 * free_listint2 - free_listint
 * @head : ghgfkldhngld
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
