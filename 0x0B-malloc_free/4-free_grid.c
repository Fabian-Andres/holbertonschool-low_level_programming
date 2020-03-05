#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Free memory of array
 *
 * @width: width of array
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
