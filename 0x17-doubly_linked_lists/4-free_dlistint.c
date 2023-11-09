#include "lists.h"
/**
 * free_dlistint - free_dlistint
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (h != NULL)
	{
		f = h;
		head = head->next;
		free(f);
	}
}
