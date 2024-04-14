#include "search_algos.h"

/**
 * search - Binary search algorithm to find a target value in an array
 *
 * @array: Pointer to the first element of the array
 * @min: The starting index of the subarray to search
 * @max: The ending index of the subarray to search
 * @target: The value to search for in the array
 *
 * Return: The index of the target value if found, otherwise -1
 */
int search(int *array, size_t min, size_t max, int target)
{
	size_t i, mid;

	if (min > max)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (i = min; i < max; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

	mid = (min + max) / 2;
	if (array[mid] == target)
	{
		return (mid);
	}
	else if (array[mid] < target)
	{
		return (search(array, mid + 1, max, target));
	}
	else if (array[mid] > target)
	{
		return (search(array, 0, mid - 1, target));
	}
	return (0);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Binary Search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not
 *         present in the array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (search(array, 0, size - 1, value));
}
