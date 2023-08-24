#include "main.h"
/**
 * reverse_array - reverse_array
 * @a: array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int rev_a[n], i, j = n;

	for (i = 0; i < n; i++)
	{
		rev_a[i] = a[j];
		j--;
	}
	a = rev_a;
}
