#include "lists.h"
/**
 * print_list - print_list
 * @h: lnkedlist
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			continue;
		}
		for (; h->str[len] != '\0'; len++)
			;
		printf("[%d] %s\n", len, h->str);
	}
	return (count);
}
