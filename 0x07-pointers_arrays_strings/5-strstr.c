#include <stdio.h>
/**
 * *_strstr - Function.
 *
 * @haystack: Value
 * @needle: Value
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, y; /** Counters */

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (haystack[(i + y)] != needle[y])
				{
					break;
				}
			}
			return (&haystack[i]);
		}
	}

	return (NULL);
}
