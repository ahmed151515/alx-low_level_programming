#include "hash_tables.h"

/**
 * hash_djb2 - do djb2 algorithm
 * @str: key
 * Return: djb2 number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (c = *str)
	{
		hash = (hash * 33) + c;
		str++;
	}

	return (hash);
}
