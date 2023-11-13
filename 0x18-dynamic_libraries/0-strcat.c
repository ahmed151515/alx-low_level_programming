#include "main.h"
/**
 * _strcat - _strcat
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}
