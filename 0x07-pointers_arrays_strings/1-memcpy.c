#include "main.h"
/**
 * _memcpy - _memcpy
 * @dest: string
 * @src: string
 * @n: int +
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char hex[] = "abcdef";
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i > 9)
		{
			dest[i] = hex[src[i] % 10];
			continue;
		}
		dest[i] = src[i];
	}
	return (dest);
}
