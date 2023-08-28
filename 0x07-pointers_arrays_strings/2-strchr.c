#include "main.h"
/**
 * _strchr - _strchr
 * @s: string
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
		;
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
