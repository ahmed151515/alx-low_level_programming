#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: pointer
 * @idx: fjglkng
 * @n: num
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev = *head, *next = prev->next;
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	if (idx == 0)
	{
		*head = new;
	}
	else
	{
		idx--;
		while (idx--)
		{
			if (prev == NULL)
			{
				return (NULL);
			}
			prev = prev->next;
			next = next->next;
		}

		prev->next = new;
		new->next = next;
	}
	return (new);
}
