#include "search_algos.h"

/**
 * minbn - function to find the min number
 *
 * @b: first number
 * @n: second number
 * Return: min number
 */
size_t minbn(size_t b, size_t n)
{
	size_t min;

	if (b < n)
		min = b;
	else
		min = n;

	return (min);
}

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
	size_t a = 0, b = sqrt(size), min = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (array[minbn(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, (int)array[a]);

		min = a;
		a = b;
		b = b + sqrt(size);
		if (a >= size)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)min, (int)a);
			printf("Value checked array[%d] = [%d]\n", (int)min, (int)array[min]);
			return (-1);
		}
	}
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, (int)array[a]);
		a = a + 1;
		if (a == minbn(b, size))
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)min, (int)a);
	for (i = min; array[i] < value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		if (i == minbn(b, size))
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, (int)array[a]);
		return (a);
	}
	else
		return (-1);
}
