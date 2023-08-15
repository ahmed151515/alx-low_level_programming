#include "main.h"
int _abs(int);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
/**
 * _abs - Absolute
 * @n: number
 * Description: main have all code
 * Return: n > 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
