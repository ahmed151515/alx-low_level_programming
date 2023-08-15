#include "main.h"
/**
 * print_alphabet - print a to z
 * Description: print [a..z]
 * gbgbgbgbfbf:21
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{

		_putchar((char) i);
	}
	_putchar('\n');
}
