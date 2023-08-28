#include "main.h"
/**
 * print_diagsums - print_diagsums
 * @a:array
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int rsum = 0, lsum = 0;
	int i, j;

	for (i = 0, j = 2; i < size; i++, j--)
	{
		rsum += a[i * size + i];
		lsum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", rsum, lsum);
}
