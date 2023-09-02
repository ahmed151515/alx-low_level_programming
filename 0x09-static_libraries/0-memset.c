#include "main.h"
/**
 * _memset - _memset
 * @s: string
 * @b: char
 * @n: int +
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
