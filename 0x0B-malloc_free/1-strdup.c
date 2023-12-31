#include "main.h"
/**
 * _strdup - _strdup()
 * @str: string to copy
 * Return: pointer the string or NULL if  array faul
 */
char *_strdup(char *str)
{
	char *res;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	res = (char *)malloc((sizeof(char) * len) + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		res[i] = str[i];
	}

	return (res);
}
