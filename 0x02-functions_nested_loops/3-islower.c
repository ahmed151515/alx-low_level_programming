#include "main.h"
/**
 * _islower - check char
 * @c: ascii of char
 * Description: check if char is lower
 * Return: 1 if char is lower else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
