#include "main.h"
/**
 * alloc_grid - alloc_grid
 * width: int
 * height: int
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int *tmp, **res, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tmp = (int *)malloc(sizeof(int) * (width * height));

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width * height; i++)
	{
		tmp[i] = 0;
	}

	res = &tmp;
	return (res);
}
