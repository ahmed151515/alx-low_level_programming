#include "main.h"
/**
 * alloc_grid - alloc_grid
 * width: int
 * height: int
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int *res, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	res = (int *)malloc(sizeof(int) * (width * height));

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width * height; i++)
	{
		res[i] = 0;
	}

	return (res);
}
