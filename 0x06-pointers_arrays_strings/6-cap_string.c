#include <stdio.h>
/**
 * *cap_string - Function.
 *
 * @s: Value
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}
		if ((s[i - 1] >= ' ' && s[i - 1] <= '/')
		|| (s[i - 1] == '}') || (s[i - 1] == '{')
		|| (s[i - 1] == '?') || (s[i - 1] == '"') || (s[i - 1] == ';'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
		if (s[i - 1] == '\n')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
