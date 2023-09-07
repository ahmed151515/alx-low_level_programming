#include "main.h"
/**
 * array_range - array_range
 * @min: int
 * @max: int
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
