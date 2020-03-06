#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Funtion _calloc
 *
 * @min: value
 * @max: value
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int i;

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max - min) + 1);
	if (new_arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		new_arr[i] = min;
		min++;
		i++;
	}

	return (new_arr);
}
