#include "main.h"
/**
 * rev_string - rev_string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;
	while (s[i] != '\0')
	{
		i++;
	}
	while (j <= i / 2)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j- 1] = tmp;
	}
}
