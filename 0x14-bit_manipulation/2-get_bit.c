#include "main.h"
/**
 * get_bit - get_bit
 * @n: n
 * @index: idex
 * Return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
	{
		return (1);
	}
	return (0);
}
