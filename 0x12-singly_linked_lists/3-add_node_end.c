#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: pointer
 * @str: stirng
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *back = *head;
	int len = 0;

	if (tmp == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	tmp->len = len;
	tmp->str = strdup(str);
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		for (; back->next != NULL; back = back->next)
			;
		back->next = tmp;
	}
	return (*head);
}
