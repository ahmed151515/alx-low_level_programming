#include "main.h"
/**
 * print_triangle - print_triangle
 * @size: number
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (size <= 0)
		_putchar('\n');
}
