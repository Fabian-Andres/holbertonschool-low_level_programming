#include "holberton.h"
/**
 * _isupper - check is uppercase.
 *
 * @c: Character
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
