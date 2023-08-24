#include "main.h"
/**
 * check - check letter
 * @l: letter
 * Return: True if check match else false
 */
int check(char l)
{
	char *tmp = " \t\n,;.!?\"(){}\0";
	int i;

	for (i = 0; tmp[i] != '\0'; i++)
	{
		if (tmp[i] == c)
			return (1);
	}
	return (0);

}
/**
 * cap_string - cap_string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (check(s[i]) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
	}
	return (s);
}
