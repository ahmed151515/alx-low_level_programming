#include "main.h"
/**
 * rev_string - rev_string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
