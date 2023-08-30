#include "main.h"
/**
 * is_prime_number - is_prime_number
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (n % 2 && is_prime_number(n - 1));
}
