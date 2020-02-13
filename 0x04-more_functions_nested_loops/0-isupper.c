#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check is uppercase.
 *
 * @c: Character
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
