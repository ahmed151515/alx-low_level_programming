#include "main.h"
/**
 * set_bit - set_bit
 * @n: n
 * @index: idex
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}
	*n  = *n | (1 << index);
	return (1);
}
