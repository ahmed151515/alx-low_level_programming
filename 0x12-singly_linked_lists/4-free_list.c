#include "lists.h"
/**
 * free_list - free_list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;


	if (!head)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
