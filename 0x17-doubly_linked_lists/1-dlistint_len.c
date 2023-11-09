#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: h
 * Return: s
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
