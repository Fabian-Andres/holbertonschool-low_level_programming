#include <stdio.h>
#include "holberton.h"

/**
 * *_strcpy - Function.
 *
 * @dest: Value string
 * @src: Value source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);

}
