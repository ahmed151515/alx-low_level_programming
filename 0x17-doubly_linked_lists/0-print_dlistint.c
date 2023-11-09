#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: h
 * Return: s
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
	}
	return (c);
}
