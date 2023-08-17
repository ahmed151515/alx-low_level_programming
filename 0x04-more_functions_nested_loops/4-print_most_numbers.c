#include "main.h"
/**
 * print_numbers - print from 0 to 9 not 2, 4
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar((char) i);
	}
	_putchar('\n');
}
