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
	i -= 1;
	while (j <= i)
	{
		tmp = s[j];
		s[i] = s[i - j];
		s[i - j] = tmp;
	}
}
