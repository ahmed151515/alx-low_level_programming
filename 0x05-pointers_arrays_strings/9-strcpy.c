#include "main.h"
/**
 * _strcpy - _strcpy
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
