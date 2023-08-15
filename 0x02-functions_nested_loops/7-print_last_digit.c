#include "main.h"
/**
 * print_last_digit - print last digit and return it
 * @n: number
 * Return: last digt
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
