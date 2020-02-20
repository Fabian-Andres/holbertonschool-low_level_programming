#include <stdio.h>
/**
 * *string_toupper - Function.
 *
 * @s: Value
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 'A'; a <= 'Z'; a++)
		{
			if ((s[i] - a) == 32)
			{
				if (s[i] >= ' ' && s[i] <= '/')
					s[i] = a;
				else
					s[i] = s[i];
			}
		}
	}
	return (s);
}
