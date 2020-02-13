#include "holberton.h"
/**
 * _isdigit - check is uppercase.
 *
 * @c: Character
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
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
