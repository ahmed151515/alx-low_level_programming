#include "lists.h"
/**
 * free_listint - free_listint
 * @head : ghgfkldhngld
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
