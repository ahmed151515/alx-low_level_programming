#include "_putchar.c"
void print_alphabet(void);
/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
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
