#include "main.h"
/**
 * alloc_grid - alloc_grid
 * @width: int
 * @height: int
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **res, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	res = (int **)malloc(sizeof(int *) * height);

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		res[i] = (int *)malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			while (i > -1)
			{
				free(res[i]);
				i--;
			}
			free(res);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			res[i][j] = 0;
		}
	}

	return (res);
}
