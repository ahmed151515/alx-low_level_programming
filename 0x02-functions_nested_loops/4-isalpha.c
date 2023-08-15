#include "main.h"
/**
 * _isalpha - check char
 * @c: ascii of char
 * Description: check if char is isalpha
 * Return: 1 if char is isalpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
