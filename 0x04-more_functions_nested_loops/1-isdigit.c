#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - check is uppercase.
 *
 * @c: Character or digit
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
