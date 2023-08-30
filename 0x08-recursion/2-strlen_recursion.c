#include "main.h"
/**
 * tmp - tmp
 * @s: string
 * @ count: int
 * Retunr: int
 */
int tmp(char *s, int count = 0)
{
	if (*s == '\0')
	{
		return (count);
	}
	return (tmp(s + 1, count + 1));
}
/**
 * _strlen_recursion - _strlen_recursion
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	return (tmp(s));
}
