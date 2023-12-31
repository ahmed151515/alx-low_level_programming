#include "main.h"
/**
 * binary_to_uint - binary_to_uint
 * @b: 0 1
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = (num * 2) + (*b - '0');
		b++;
	}
	return (num);
}
