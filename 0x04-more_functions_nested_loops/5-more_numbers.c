#include "main.h"
/**
 * print_numbers - (print from 0 to 14) * 10
 */
void print_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar((j > 9 ? i / 10 : i) + '0');
			if (j > 9)
			{
				_putchar((i % 10) + '0');
			}
		}
	}
	_putchar('\n');
}