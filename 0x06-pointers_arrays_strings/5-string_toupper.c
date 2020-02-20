#include <stdio.h>
/**
 * *string_toupper - Function.
 *
 * @s: Value
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 'A'; a <= 'Z'; a++)
		{
			if ((s[i] - a) == 32)
				s[i] = a;
		}
	}
	return (s);
}
