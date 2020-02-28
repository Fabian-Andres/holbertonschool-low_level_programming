#include <stdio.h>
/**
 * *_strpbrk - Function.
 *
 * @s: Value
 * @accept: Value
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, y; /** Counters */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
