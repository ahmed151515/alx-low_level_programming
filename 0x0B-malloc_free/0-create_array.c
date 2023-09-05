#include "main.h"
/**
 * create_array - create array
 * @size: len of array
 * @c: valu to initializes
 * Return: pointer the array or NULL if size = 0 or array faul
 */
char *create_array(unsigned int size, char c)
{
	char *res = (char *)malloc(sizeof(c) * size);
	unsigned int i;

	if (res == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}

	return (res);
}
