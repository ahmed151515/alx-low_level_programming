#include "main.h"
/**
 * reverse_array - reverse_array
 * @a: array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			tmp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = tmp;
		}
	}
}
