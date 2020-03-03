#include <stdlib.h>
#include <stdio.h>
/**
 * sizestr - return size number
 *
 * @str: charactter to print
 *
 * Return: 0
 */

int sizestr(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * _strdup - print array of characters
 *
 * @str: charactter to print
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, size;
	char *new_arr;

	if (str == NULL)
	{
		return (NULL);
	}
	size = sizestr(str) + 1;
	new_arr = malloc(sizeof(char) * size);

	if (new_arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_arr[i] = str[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
