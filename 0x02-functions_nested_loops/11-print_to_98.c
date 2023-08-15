#include "main.h"
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
