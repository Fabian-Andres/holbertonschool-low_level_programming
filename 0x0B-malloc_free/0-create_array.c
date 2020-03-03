#include <stdlib.h>

/**
 * create_array - print array of characters
 *
 * @size: the size of the memory to print
 * @c: charactter to print
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_arr;

	if (size == 0)
	{
		return (NULL);
	}

	new_arr = malloc(sizeof(char) * size);

	if (new_arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_arr[i] = c;
		i++;
	}
	new_arr[i] = '\0';

	return (new_arr);
}
