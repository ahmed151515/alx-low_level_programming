#include "main.h"
/**
 * pow - pow 2
 * @n: int
 * Return: int
 */
int _pow(int n)
{
	int num = 1;

	if (n == 0)
	{
		return (1);
	}
	while (n--)
	{
		num *= 2;
	}
	return (num);
}
/**
 * binary_to_uint - binary_to_uint
 * @b: 0 1
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = sizeof(b) - 1;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num += (*b - '0') * (_pow(len));
		b++;
	}
	return (num);
}
