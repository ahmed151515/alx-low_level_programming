#include "main.h"
/**
 * _strcmp - _strcmp
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	if (len_s1 > len_s2)
		return (15);
	if (len_s1 < len_s2)
		return (-15);
	return (0);

}
