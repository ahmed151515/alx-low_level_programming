#include "main.h"
/**
 * flip_bits - flip_bits
 * @n: ggf
 * @m: ghfjh
 * Return: ghfg
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	unsigned int count = 0;

	while (tmp)
	{
		if (tmp & 1)
		{
			count++;
		}
		tmp = tmp >> 1;
	}
	return (count);
}
