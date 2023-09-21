#include "lists.h"
/**
 * print_list - print_list
 * @h: lnkedlist
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
	}
	return (count);
}
