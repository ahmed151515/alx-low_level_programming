#include "_putchar.c"
void print_alphabet_x10(void);
/**
 * main - entry funtion
 * Description: main have all code
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet_x10 - print a to z * 10
 * Description: print [a..z] * 10
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{

			_putchar((char) i);
		}
		_putchar('\n');
	}
}
