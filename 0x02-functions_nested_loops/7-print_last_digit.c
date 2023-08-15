#include "_putchar.c"
int print_last_digit(int);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
/**
 * print_last_digit - print last digit and return it
 * @n: number
 * Return: last digt
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
