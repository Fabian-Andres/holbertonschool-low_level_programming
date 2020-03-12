#include <stdlib.h>
/**
 * array_iterator - print iterator
 *
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (cpm == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		cpm(array[i]);
}
