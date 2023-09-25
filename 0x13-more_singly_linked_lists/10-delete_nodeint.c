#include "lists.h"
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: pointer
 * @index: fjglkng
 * Return: list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *next, *tmp;

	if (prev == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	index--;
	while (index--)
	{
		if (prev == NULL)
		{
			return (-1);
		}
		prev = prev->next;
	}
	tmp = prev->next;
	next = tmp->next;
	free(tmp);
	prev->next = next;
	
	return (1);
}
