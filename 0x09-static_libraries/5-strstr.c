#include "main.h"
/**
 * _strstr - _strstr
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, tmp = 0;

	for (; *haystack != '\0'; haystack++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
			{
				tmp = 1;
			}
			if (haystack[i] != needle[i])
			{
				tmp = 0;
				break;
			}
		}
		if (tmp == 1)
		{
			return (haystack);
		}
	}
	return (NULL);
}
