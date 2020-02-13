#include "holberton.h"
/**
 * _isdigit - check is uppercase.
 *
 * @c: Character
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
	
}
