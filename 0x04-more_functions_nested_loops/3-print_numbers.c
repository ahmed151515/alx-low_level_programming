#include "main.h"
/**
 * print_numbers - print from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar((char) i);
	}
	_putchar('\n');
}
