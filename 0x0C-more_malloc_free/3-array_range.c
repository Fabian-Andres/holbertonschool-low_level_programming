#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Funtion _calloc
 *
 * @nmemb: value
 * @size: value
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

	i = min;
	while (i <= max)
	{
		new_arr[i - min] = i;
		i++;
	}

	return (new_arr);
}
