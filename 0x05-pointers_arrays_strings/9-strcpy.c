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
		if (src[n] == '\0')
		{
			putchar('\n');
		}
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
