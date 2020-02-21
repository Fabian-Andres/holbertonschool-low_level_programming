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
		|| (s[i - 1] == '}') || (s[i - 1] == ' ') || (s[i - 1] == 9) || (s[i - 1] == '\n')  || (s[i] == s[0]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (s[i] == '\n')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
