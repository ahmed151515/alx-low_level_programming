#include "main.h"
/**
 * _strncat - _strncat
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
