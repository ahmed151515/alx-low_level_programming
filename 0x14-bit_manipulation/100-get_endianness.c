#include "main.h"

/**
 * get_endianness - get_endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int num = 1;
	char *s = (char *)&num;

	return ((int)*s);
}
