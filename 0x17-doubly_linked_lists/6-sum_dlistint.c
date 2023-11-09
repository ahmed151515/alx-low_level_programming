#include "lists.h"
/**
 * sum_dlistint - sum_dlistint
 * @head: h
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
