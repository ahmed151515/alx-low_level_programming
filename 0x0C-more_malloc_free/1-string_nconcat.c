#include "main.h"
/**
 * string_nconcat - string_nconcat
 * @s1: string
 * @s2: string
 * @n: int +
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	res = malloc(l1 + n + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < n && j < l2; j++)
	{
		res[l1 + j] = s2[j];
	}
	res[l1 + j] = '\0';
	return (res);
}
