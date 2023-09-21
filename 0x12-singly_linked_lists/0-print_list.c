#include "lists.h"
/**
 * print_list - print_list
 * @h: lnkedlist
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		count++;
		if (tmp->str == NULL)
		{
			printf("[0] (nill)\n");
			continue;
		}
		printf("[%d] %s\n", tmp->len, tmp->str);
	}
	return (count);
}
