#include "lists.h"
/**
 * list_len - list_len
 * @h: linst_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		count++;
	}

	return (count);
}
