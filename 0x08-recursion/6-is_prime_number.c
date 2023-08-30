#include "main.h"
/**
 * tmp -tmp
 * @n: int
 * @d: int
 * Return: int
 */
int tmp(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (tmp(n, d + 1));
}
/**
 * is_prime_number - is_prime_number
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	return (tmp(n, 2));
}
