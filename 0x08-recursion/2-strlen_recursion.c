#include "holberton.h"

/**
 * _print_rev_recursion - Function puts
 *
 * @s: Pointer od array
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}

	return (s);
}
