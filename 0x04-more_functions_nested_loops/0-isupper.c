#include "holberton.h"
/**
 * _isupper - check is uppercase.
 *
 * @c: Character
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
