#include "search_algos.h"

/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value
 * Return: positon
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, mid, i;

	while (low <= high && array != NULL)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = (low + (high - low) / 2);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
