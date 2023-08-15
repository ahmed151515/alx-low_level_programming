#include "_putchar.c"
#include "stdio.h"
void print_to_98(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
/**
 * print_to_98 - rlm;evvvff
 * @n: num
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		print_to_98(n + 1);
	}
	if (n > 98)
	{
		printf("%d, ", n);
		print_to_98(n - 1);
	}
	if(n == 98)
	{
		printf("%d\n", n);
		return;
	}
}
