#include "main.h"
/**
 * _strncpy - _strncpy
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *res = src;

	while (n > 0)
	{
		src++;
		n--;
	}
	while (*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*src = '\0';
	dest = res;
	return (res);
}
