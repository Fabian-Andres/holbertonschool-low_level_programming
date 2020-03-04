#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a multidimencional array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: New array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		arr[i][i] = 0;
	}
	return (arr);
}
