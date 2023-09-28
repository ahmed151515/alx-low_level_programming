#include "main.h"
/**
 * get_bit - get_bit
 * @n: n
 * @index: idex
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	if (n & (1 << index))
	{
		return (1);
	}
	return (0);
}
