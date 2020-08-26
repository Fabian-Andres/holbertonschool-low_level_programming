#include "search_algos.h"

/**
 * jump_search - function jump search
 *
 * @array: is a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: position of value in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int) a, array[a]);
		a = b;
		b += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
	printf("Value found between indexes [%d] and [%d]\n",
		(int) a, (int) b);

	for (i = a; i <= b && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
