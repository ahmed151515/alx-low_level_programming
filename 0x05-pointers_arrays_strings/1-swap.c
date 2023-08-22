#include "main.h"
/**
 * swap_int - swap
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
