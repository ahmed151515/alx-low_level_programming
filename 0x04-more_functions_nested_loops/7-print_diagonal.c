#include "main.h"
/**
 * print_diagonal - print_diagonal
 * @n: number
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j  < 1; j++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}

	if (n <= 0)
		_putchar('\n');
}
