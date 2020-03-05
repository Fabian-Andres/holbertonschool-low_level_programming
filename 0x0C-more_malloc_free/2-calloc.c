#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Funtion _calloc
 *
 * @nmemb: value
 * @size: value
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_arr = malloc(nmemb * size);
	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		new_arr[i] = 0;
	}

	return (new_arr);
}
