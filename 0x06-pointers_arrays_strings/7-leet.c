#include <stdio.h>
/**
 * *leet - Function.
 *
 * @s: Value
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, n;
	char abc[] = "aeotl";
	char nums[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (s[i] == abc[n] || s[i] == (abc[n] - 32))
				s[i] = nums[n];
		}
	}
	return (s);
}
