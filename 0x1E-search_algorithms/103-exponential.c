#include "search_algos.h"

/**
 * binary_search2 - function binary search
 *
 * @array: is a pointer to the first element of the array to search
 * @value: value to search for
 * @left: left position
 * @right: right position
 * Return: position of value in array
 */
int binary_search2(int *array, int value, size_t left, size_t right)
{
	size_t middle = 0, i = 0;


	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i <= right)
		{
			if (i == right)
				printf("%i", array[i]);
			else
				printf("%i, ", array[i]);
			i++;
		}
		printf("\n");

		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * exponential_search - function exponential search
 *
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: position of value in array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;

	if (array == NULL && size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)bound, array[bound]);
		bound *= 2;
	}

	if (bound > size)
		min = size;
	else if (bound == size)
		min = bound - 1;
	else
		min = bound;

	printf("Value found between indexes [%d] and [%d]\n",
		(int)bound / 2, (int)min);

	return (binary_search2(array, value, bound / 2, min));
}
