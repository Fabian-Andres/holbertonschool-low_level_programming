#include <stdio.h>
/**
 * *_strcat - stcat function.
 *
 * @dest: Value dest
 * @src: Value src
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int p; /** Position */
	int i = 0;

	for (p = 0; dest[p] != '\0'; p++)
	{
		i++;
	}
	for (p = 0; src[p] != '\0'; p++)
	{
		dest[i] = src[p];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
