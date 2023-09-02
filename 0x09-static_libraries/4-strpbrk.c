#include "main.h"
/**
 * _strpbrk - strpbrk
 * @s: string
 * @accept: string
 * Return: srting
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
