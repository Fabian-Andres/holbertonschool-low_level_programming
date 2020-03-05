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

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max - min) + 1);
	if (new_arr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		new_arr[min] = min;
		min++;
	}
	new_arr[min] = '\0';

	return (new_arr);
}
