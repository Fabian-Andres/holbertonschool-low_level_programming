#include <stdio.h>
/**
 * *_strchr - Function.
 *
 * @s: Value
 * @c: Value
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i; /** Index */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}
