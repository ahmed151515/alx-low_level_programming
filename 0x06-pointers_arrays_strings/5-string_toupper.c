#include "main.h"
/**
 * string_toupper - string_toupper
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 32;
		}
	}
	return (s);
}
