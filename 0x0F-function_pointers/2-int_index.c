#include <stdlib.h>
/**
 * int_index - print comparation
 *
 * @array: array
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);

			i++;
		}
	}
	return (-1);
}
