#include "main.h"
/**
 * tmp - tmp
 * @n: int
 * @n2: int
 * Return: int
 */
int tmp(int n, int n2)
{
	if (n2 * n2 == n)
	{
		return (n2);
	}
	if (n2 * n2 > n)
	{
		return (-1);
	}
	tmp(n + 1, n2);
}
/**
 * _sqrt_recursion -_sqrt_recursion
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (tmp(n, 1));
}
