#include "main.h"
/**
 * print_binary - print_binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8;
	int p = 0;

	while (b)
	{
		if (n & 1l << --b)
		{
			_putchar('1');
			p++;
		}
		else if (p)
		{
			_putchar('0');
		}
	}
	if (!p)
	{
		_putchar('0');
	}
}
