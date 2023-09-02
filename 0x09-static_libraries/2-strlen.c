#include "main.h"
/**
 * _strlen - return size string
 * @s: string
 * Return: size string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
