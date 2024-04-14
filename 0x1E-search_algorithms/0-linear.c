#include "search_algos.h"

/**
 * linear_search - linear_search
 * @array: array
 * @size: size
 * @value: value
 * Return: positon
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}