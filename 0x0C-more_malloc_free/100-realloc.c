#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Funtion _calloc
 *
 * @nmemb: value
 * @size: value
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_arr, *old_arr;
	unsigned int i, size, size_arr;


	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_arr = malloc(new_size);
		if (new_arr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_arr);
	}

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	size = old_size;
	size_arr = new_size; 
	if (new_size > old_size)
		size = new_size;
		size_arr = old_size; 

	old_arr = ptr;
	new_arr = malloc(size);	
	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_arr; i++)
	{
		new_arr[i] = old_arr[i];
	}
	free(ptr);
	return (new_arr);
}
