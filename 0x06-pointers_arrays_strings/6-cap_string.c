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
		if ((s[i - 1] == ',') || (s[i - 1] == ';') || (s[i - 1] == '.')
		|| (s[i - 1] == '!') || (s[i - 1] == '?') || (s[i - 1] == '"')
		|| (s[i - 1] == '(') || (s[i - 1] == ')') || (s[i - 1] == '{')
		|| (s[i - 1] == '}') || (s[i - 1] == ' ') || (s[i - 1] == 9)
		|| (s[i - 1] == '\n') || (s[i - 1] == '\t'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	s[i++] = '\0';
	return (s);
}
