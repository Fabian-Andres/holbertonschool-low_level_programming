#include "search_algos.h"

/**
 * linear_search - function to linear search
 *
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: position of value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}

	return (-1);
}
