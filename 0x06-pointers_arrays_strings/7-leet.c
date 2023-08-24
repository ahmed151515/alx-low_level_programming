#include "main.h"
/**
 * leet - leet
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char check[] = "aAeEoOtTlL";
	char leet_replece[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; check[j] != '\0'; i++)
		{
			if (s[i] == check[j])
			{
				s[i] = leet_replece[j];
				break;
			}
		}
	}
	return (s);
}
