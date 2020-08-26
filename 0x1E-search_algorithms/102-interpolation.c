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
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[2109] is out of range\n");
	return (-1);

}
