#include <stdio.h>
/**
 * *rot13 - Function.
 *
 * @s: Value
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i, n;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nums[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == abc[n])
			{
				s[i] = nums[n];
				break;
			}
		}
	}
	return (s);
}
