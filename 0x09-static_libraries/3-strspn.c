#include <stdio.h>
/**
 * _strspn - Function.
 *
 * @s: Value
 * @accept: Value
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, y; /** counters  */
	int equal = 0; /** count equal */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i != equal)
		{
			break;
		}
		for (y = 0; accept[y]; y++)
		{
			if (s[i] == accept[y])
			{
				equal++;
			}
		}
	}

	return (equal);
}
