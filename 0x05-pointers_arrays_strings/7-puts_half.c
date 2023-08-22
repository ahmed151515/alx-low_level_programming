#include "main.h"
/**
 * puts_half - puts_half
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0, half;

	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	half = len % 2;
	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
}
