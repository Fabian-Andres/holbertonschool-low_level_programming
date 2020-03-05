#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Funtion string_nconcat
 *
 * Return: Always 0.
 */
int longarr(char *s1)
{
	int i = 0;

	while (s1[i])
	{
		i++;	
	}
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_arr;
	unsigned int i, y;
	unsigned int size1, size2;

	if (s1 == NULL || s2 == NULL)
		return ("");

	size1 = longarr(s1);
	size2 = n;

	if (n >= size2)
		size2 = longarr(s2);
		
	new_arr = malloc(sizeof(char) * (size1 + size2) + 1);
	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		new_arr[i] = s1[i];	
	}
	for (y = 0; y < n; y++)
	{
		new_arr[i] = s2[y];
		i++;
	}
	new_arr[i] = '\0';

	 return (new_arr);
}
