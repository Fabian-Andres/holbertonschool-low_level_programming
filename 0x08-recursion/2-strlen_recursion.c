#include "holberton.h"

/**
 * _print_rev_recursion - Function puts
 *
 * @s: Pointer od array
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (s[i] != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
