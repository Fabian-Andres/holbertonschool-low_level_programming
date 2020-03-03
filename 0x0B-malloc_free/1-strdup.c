#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - print array of characters
 *
 * @size: the size of the memory to print
 * @c: charactter to print
 *
 * Return: 0
 */

int sizestr(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++);

	return (i);
}
char *_strdup(char *str)
{
	unsigned int i, size;
	char *new_arr;

	if (str == NULL)
	{
		return (NULL);
	}
	size = sizestr(str);
	new_arr = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		new_arr[i] = str[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
