#include "lists.h"
/**
 * add_node - add_node
 * @head: pointer
 * @str: stirng
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
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
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
