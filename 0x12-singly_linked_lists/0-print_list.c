#include "lists.h"
/**
 * print_list - print all node
 * @h: first node
 * Return: num of node
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
