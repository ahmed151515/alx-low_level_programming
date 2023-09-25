#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: fndgnfdl
 * @index: klfgdhfdjg
 * Return: nlfgnf
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	
	while (index--)
	{
		node = node->next;
	}
	if (node == NULL)
	{
		return (NULL);
	}
	return (node);
}
