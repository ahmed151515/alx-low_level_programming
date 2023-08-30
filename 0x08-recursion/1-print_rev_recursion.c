#include "main.h"
/**
 * print_rev - print_rev
 * @s: string
 * @i: int
 */
void print_rev(char *s, int i)
{
	if (i == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	print_rev(s - 1, i - 1);
}
/**
 * tmp - tmp
 * @s: string
 * @i: int
 */
void tmp(char *s, int i)
{
	if (*s == '\0')
	{
		print_rev(s - 1, i - 1);
		return;
	}
	tmp(s + 1, i + 1);
}
/**
 * _print_rev_recursion - _print_rev_recursion
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	tmp(s, 0);
}
