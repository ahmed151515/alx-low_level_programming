#include "main.h"
#include <stdio.h>
/**
 * print_array - print_array
 * @a: array
 * @n: num
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	
	printf("%d\n", a[n - 1]);
}
