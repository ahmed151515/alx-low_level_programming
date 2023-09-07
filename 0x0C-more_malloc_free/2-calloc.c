#include "main.h"
/**
 * _calloc - _calloc
 * @nmemb: int+
 * @size: int+
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	char *set;
	unsigned int i;

	res = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (res == NULL)
	{
		return (0);
	}
	set = res;
	for (i = 0; i < nmemb * size; i++)
	{
		set[i] = 0;
	}

	return (res);
}
