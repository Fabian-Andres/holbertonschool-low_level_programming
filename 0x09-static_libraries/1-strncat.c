#include <stdio.h>
/**
 * *_strncat - *_strncat function.
 *
 * @dest: Value dest
 * @src: Value src
 * @n: value n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int p; /** Position */
	int i = 0;

	for (p = 0; dest[p] != '\0'; p++)
	{
		i++;
	}
	for (p = 0; p < n ; p++)
	{
		dest[i] = src[p];
		i++;
		if (dest[p] == '\0')
			break;
	}
	dest[i++] = '\0';

	return (dest);
}
