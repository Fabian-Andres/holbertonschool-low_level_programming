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

	for (i = 0; str && str[i]; i++)
		;

	return (i);
}

/**
 * str_concat - print array of characters
 *
 * @s1: charactter to print
 * @s2: charactter to print
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, y, size1, size2;
	char *new_arr;

	size1 = sizestr(s1);
	size2 = sizestr(s2) + 1;
	new_arr = malloc(sizeof(char) * (size1 + size2));

	if (new_arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1 && s1[i])
	{
		new_arr[i] = s1[i];
		i++;
	}

	y = 0;
	while (s2 && s2[i])
	{
		new_arr[i] = s2[y];
		i++;
		y++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
