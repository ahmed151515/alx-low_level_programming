#include "lists.h"
/**
 * free_dlistint - free_dlistint
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
}
