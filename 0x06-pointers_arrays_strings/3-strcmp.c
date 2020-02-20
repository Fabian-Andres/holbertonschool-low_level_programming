#include <stdio.h>
/**
 * _strcmp - Function.
 *
 * @s1: Value
 * @s2: Value
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, total;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		total = s1[i] - s2[i];
		if (s1[i] != s2[i])
			break;
	}

	return (total);
}
