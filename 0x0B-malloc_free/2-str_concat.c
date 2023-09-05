#include "main.h"
/**
 * str_concat - str_concat
 * @s1: string base
 * @s2: string 2
 * Return: pointer the string or NULL if  array faul
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		for (; s1[len1] != '\0'; len1++)
			;
	}

	if (s2 != NULL)
	{
		for (; s2[len2] != '\0'; len2++)
			;
	}

	res = (char *)malloc((sizeof(char) * (len1 + len2)) + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		res[i + j] = s2[j];
	}

	return (res);
}
