#include "search_algos.h"

/**
 * binary_search - function binary search
 *
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: position of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1, middle = 0, i = 0;


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
