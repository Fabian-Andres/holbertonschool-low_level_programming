#include "search_algos.h"

/**
 * interpolation_search - function jump search
 *
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: position of value in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)
					/ (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%d] is out of range\n", (int)size);
	return (-1);

}
