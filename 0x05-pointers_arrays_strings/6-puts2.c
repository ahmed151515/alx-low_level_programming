#include "main.h"
/**
 *  puts2 - print string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((int) str[i] % 2 == 0 && str[i] != '0')
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
