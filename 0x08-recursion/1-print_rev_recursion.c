#include "main.h"
/**
 */
void print_rev(char *s, int i)
{
	if (i == 0)
	{
		return;
	}
	_putchar(*s);
	print_rev(s - 1, i -1);
}
/**
 * tmp - tmp
 * @s: string
 * @count: int
 */
void tmp(char *s, int i)
{
        if (*s == '\0')
        {
                print_rev(s - 1, i - 1);
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
