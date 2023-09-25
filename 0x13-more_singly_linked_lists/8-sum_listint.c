#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: flgf
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
