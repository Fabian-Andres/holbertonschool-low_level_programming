#include<stdio.h> 
#include<stdlib.h> 

int **alloc_grid(int width, int height)
{
	int **arr = malloc(width * height * sizeof(int));
	int i, y;

	for (i = 0; i < width; i++)
	{
		for (y = 0; y < height; y++)
		{
			*(arr + i*width + y) = 0;
		}
	}

	return (arr);
	
}
