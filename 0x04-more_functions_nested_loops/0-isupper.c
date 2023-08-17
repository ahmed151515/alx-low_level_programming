#include "main.h"

/**
 * _isupper - check if char is upper
 * @c: ascii
 * Return: if upeer return 1 else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
